#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

string user;
int password;
int cost;
int exitcode = 10;

void registerAccount()
{
    cout << "Registration\n\n";

    cout << "Enter user name: ";
    cin >> user;

    cout << "Enter 3 digit pin number: ";
    cin >> password;

    cout << "Registration Successful\n\n";
}

void login()
{
    cout << "Login\n\n";

    string checkuser;
    cout << "Enter user name: ";
    cin >> checkuser;

    int checkpassword;
    cout << "Enter 3 digit pin number: ";
    cin >> checkpassword;

    if(user == checkuser && password == checkpassword){
        cout << "Login Success\n";
    }
    else{
        cout << "Username or Password is incorrect\n";
        _Exit(exitcode);
    }
}

int counttotal(int choice, int noft)
{
    if(choice == 1)
        return noft * 100;
    else if(choice == 2)
        return noft * 120;
    else if(choice == 3)
        return noft * 150;
    else if(choice == 4)
        return noft * 180;
    else if(choice == 5)
        return noft * 220;
    else
        return noft * 250;
}

void buyTicket()
{
    cout << "Menu List\n1) Buy Ticket \n2) Exit\n";
    cout << "Enter Choice: ";
    int choice;
    cin >> choice;
    if(choice == 1){
        cout << "1) Dhaka to Bhairab Bazar bdt 100\n";
        cout << "2) Dhaka to Brahman Baria bdt 120\n";
        cout << "1) Dhaka to Comilla bdt 150\n";
        cout << "1) Dhaka to Laksham bdt 180\n";
        cout << "1) Dhaka to Feni bdt 220\n";
        cout << "1) Dhaka to Chittagong bdt 250\n";

        cout << "Enter where you want to go (1/2/3/4/5/6): ";
        int place;
        cin >> place;
        cout << "Enter number of tickets: ";
        int numberofticket;
        cin >> numberofticket;

        int totalprice = counttotal(choice, numberofticket);
        cout << "Total Price: " << totalprice << endl;
        cost = totalprice;
    }
    else{
        _Exit(exitcode);
    }
}

int main()
{
    registerAccount();
    login();
    buyTicket();

    cout << "Enter payment of tickets: ";
    int payment;
    cin >> payment;
    if(cost == payment){
        cout << "Payment successful. Thank you for using the system.\n";
    }
    else{
        cout << "You have due.\n";
    }
    return 0;
}
