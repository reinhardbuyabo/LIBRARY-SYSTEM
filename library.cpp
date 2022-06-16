#include <iostream>
#include <fstream>
using namespace std;

bool studentLogin(string name, string password){
    return true;
};

bool librarianLogin(string name, string password){
    return true;
};

int main () {
    cout << "******Welcome to the Library******" << endl << endl;

    cout << "Select your role to proceed: " << endl;
    cout << "\t1.Normal Student Login" << endl;
    cout << "\t2.Librarian Login" << endl << endl;

    cout << "Enter role to proceed:  ";
    int option;
    cin >> option;
    cout << "__________________________________________________" << endl << endl;
    if (option == 1) {
        cout << "****WELCOME TO THE STUDENT LOGIN PAGE****" << endl << endl;

        cout << "Enter your username: ";
        string studentName;
        cin >> studentName;
        cout << "Enter your password: ";
        string studentPassword;
        cin >> studentPassword;
        cout << "__________________________________________________" << endl;
        if(studentLogin(studentName, studentPassword)) {
            cout << "Successfully logged in!.." << endl << endl;

            cout << "Select one option below" << endl;
            cout << "\t1.View Personal Details/Profile" << endl;
            cout << "\t2.Request to borrow/ rent a book" << endl;
            cout << "\t3.Return borrowed/rented book" << endl;
            cout << "\t4.Change password" << endl << endl;

            cout << "Enter choice: ";
            int optionone;
            cin >> optionone;
        }
        
    } else if (option == 2 ) {
        cout << "****WELCOME TO THE LIBRARIAN LOGIN PAGE****" << endl << endl;

        cout << "Enter librarian username: ";
        string librarianName;
        cin >> librarianName;
        cout << "Enter librarian password: ";
        string librarianPassword;
        cin >> librarianPassword;
        cout << "__________________________________________________" << endl;

        if (librarianLogin(librarianName, librarianPassword)) {
            cout << "Successfully logged in!.." << endl << endl;

            cout << "Select one option below" << endl;
            cout << "\t1.Register new student" << endl;
            cout << "\t2.Approve student's request to borrow book" << endl;
            cout << "\t3.Accept returned book and update system" << endl;
            cout << "\t4.Change password" << endl << endl;

            cout << "Enter option to proceed: ";
            int optiontwo;
            cin >> optiontwo; 
        } else {
            cout << "Invalid credentials." << endl;
        }
    } else {
        cout << "Invalid input!" << endl;
    }
    return 0;
}