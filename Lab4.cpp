///////////////////////////////////////////////////////////////////// 
// Name: Gilberto Almanza 
// Date: 09/29/2026 
// Class: CSCI 1470.0X 
// Semester: Fall 2026 
// CSCI 1470 Instructor: Dr. Jonatan Reyes  
// Program Description: Recievs report of books checked out. 
///////////////////////////////////////////////////////////////////// 

#include <iostream>
#include <fstream>

using namespace std;

//This is the global variable
int totalBooks = 0;

//These are the function prototypes they must match what was already provided in main.
int generateUserID();
void borrowBook(int& bookCount);
void log(int uid, int bookCount);
void report();


int main()
{
    int uid, bookCount;

    // Simulating book checkouts for a user
    bookCount = 0;
    uid = generateUserID();
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);

    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID();
    borrowBook(bookCount);
    log(uid, bookCount);

    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID();
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);

    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID();
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);

    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID();
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);

    // Reporting end-of-day transactions
    report();

    return 0;
}
//function definitions
int generateUserID() {
    static int uid = 1001;

    return uid++;
}

void borrowBook(int& bookCount) {
    bookCount++;
    totalBooks++;
}

void log(int uid, int bookCount) {
    ofstream file("Lab4.txt", ios::app);

    file << "User ID: " << uid << endl;
    file << "Books Borrowed: " << bookCount << endl;
    file << endl;

    file.close();
}
void report() {
    ofstream file("Lab4.txt", ios::app);
    file << "A total of " << totalBooks
        << " were checked out today." << endl;
    
    cout << "A total of " << totalBooks 
        << " were checked out today." << endl;

    file.close();
}
