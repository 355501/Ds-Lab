#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
    string AccountHolderName;
    int AccountNumber;
    float balance;

public:
    BankAccount(string a, int b, float c)
    {
        AccountHolderName = a;
        AccountNumber = b;
        balance = c;
    }

    void deposit(float amount)
    {
        balance += amount;
    }

    void withdraw(float amount)
    {
        if (balance >= amount)
            balance -= amount;
        else
            cout << "Insufficient balance" << endl;
    }

    void display()
    {
        cout << "Account Holder Name: " << AccountHolderName << endl;
        cout << "Account Number: " << AccountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    string f;
    int g;
    float h, i, j;
    cout << "Enter first Account Holder Name: ";
    cin >> f;
    cout << "Enter Account Number: ";
    cin >> g;
    cout << "Enter balance: ";
    cin >> h;

    BankAccount b(f, g, h);

    cout << "Enter deposit amount: ";
    cin >> i;
    b.deposit(i);

    cout << "Enter withdrawal amount: ";
    cin >> j;
    b.withdraw(j);

    b.display();

    return 0;
}
