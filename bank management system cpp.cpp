#include <iostream>
#include <string>
using namespace std;

int main()
{
    string accountName, password;
    string loginName, loginPassword;
    float balance = 0, amount;
    int choice;

    // Create Account
    cout << "===== CREATE ACCOUNT =====" << endl;
    cout << "Enter Account Name: ";
    cin >> accountName;

    cout << "Set Password: ";
    cin >> password;

    cout << "\nAccount Created Successfully!" << endl;

    // Login
    cout << "\n===== LOGIN =====" << endl;
    cout << "Enter Account Name: ";
    cin >> loginName;

    cout << "Enter Password: ";
    cin >> loginPassword;

    if(loginName == accountName && loginPassword == password)
    {
        cout << "\nLogin Successful!" << endl;

        do
        {
            cout << "\n===== BANKING SYSTEM =====" << endl;
            cout << "1. Deposit" << endl;
            cout << "2. Withdraw" << endl;
            cout << "3. Check Balance" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter Your Choice: ";
            cin >> choice;

            switch(choice)
            {
                case 1:
                    cout << "Enter Amount to Deposit: ";
                    cin >> amount;
                    balance += amount;
                    cout << "Deposit Successful!" << endl;
                    break;

                case 2:
                    cout << "Enter Amount to Withdraw: ";
                    cin >> amount;

                    if(amount <= balance)
                    {
                        balance -= amount;
                        cout << "Withdrawal Successful!" << endl;
                    }
                    else
                    {
                        cout << "Insufficient Balance!" << endl;
                    }
                    break;

                case 3:
                    cout << "Current Balance: " << balance << endl;
                    break;

                case 4:
                    cout << "Thank You for Using Banking System!" << endl;
                    break;

                default:
                    cout << "Invalid Choice!" << endl;
            }

        } while(choice != 4);
    }
    else
    {
        cout << "\nInvalid Account Name or Password!" << endl;
    }

    return 0;
}
