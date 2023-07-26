#include<iostream>
using namespace std;

class user
{
    public:
    string acc_name;
    string acc_type;
    int deposit;
    int withdraw;
    int pin_no;
    int balance;
    string transactionHistory[100];
    private:
    int transactionNumber=0;
    string acc_no;

    public:
    void setValue()
    {
        cout<<"Enter name: \n";
        cin>>acc_name;
        cout << "Enter Account number: \n";
        cin >> acc_no;
        cout << "Enter Account type: \n";
        cin >> acc_type;
        cout<<"Enter balance: \n";
        cin>>balance;

    }

    void Deposit()
    {
        cout << "\nEnter amount to be Deposited:\n";
        cin >>deposit;
        
        string depositString;
        string transaction = "You have deposited " + depositString + "rupees only";
        cout<<"You have deposited "<<deposit<<" rupees only";

        transactionHistory[transactionNumber++] = transaction;
        balance = balance + deposit;
    }

    void withdrawal()
    {
        cout << "\nEnter amount to be withdrawn:\n";
        cin >>withdraw;
        
        if(withdraw > balance)
        {
            cout<<"You do not have sufficient balance\n";
        }

        else
        {
            string withdrawString;
            string transaction = "You have debited " + withdrawString + "rupees only";
            cout<<"You have withdrawn "<<withdraw<<" rupees only";


            transactionHistory[transactionNumber++] = transaction;
            balance -= withdraw;
        }
    }

    void show_balance()
    {
        cout<<"Balance is : "<<balance;
    }

    
};

int main() 
{
    user b;
    int choice;
 
    while (1) {
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~WELCOME~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~\n\n";
        cout << "Enter Your Choice\n";
        cout << "\t1. Enter details\n";
        cout << "\t2. Deposit Money\n";
        cout << "\t3. Withdraw Money\n";
        cout << "\t4. Show Total balance\n";
        cout << "\t5. Cancel\n";
        cin >> choice;
 
        // Choices to select from
        switch (choice) {
        case 1:
            b.setValue();
            break;
        case 2:
            b.Deposit();
            break;
        case 3:
            b.withdrawal();
            break;
        case 4:
            b.show_balance();
            break;
        case 5:
            exit(1);
            break;
        default:
            cout << "\nInvalid choice\n";
        }
    }

    return 0;
}