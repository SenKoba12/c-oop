#include <iostream>
#include <iomanip>

using namespace std;

class BankAccount{
private:
    int account_number;
    double balance;
    double depo;
public:
    BankAccount(int acct_num,double bal){
        account_number = acct_num;
        balance = bal;
        depo = 0;
    }

    int getAccountNumber(){
        return account_number;
    }

    double getBalance(){
        return balance;
    }

    void setAccountNumber(int acct_num){
        account_number = acct_num;
    }

    void setBalance(double bal){
        balance = bal;
    }

    void deposit(){
        cout<<"How much will you deposit?"<<endl;
        cin>>depo;

        balance = balance + depo;
        cout<<"Thank you for using Keith Bank Services!"<<endl;
        cout<<"Balance: " << balance <<endl;
    }

    void withdraw(){
        cout<<"How much will you withdraw?"<<endl;
        cin>>depo;

        balance = balance - depo;
        if(depo > balance){
            cout<<"Deposit too large. Please try again."<<endl;
        }
        else{
            cout<<"Thank you for using Keith Bank Services!"<<endl;
            cout<<"Balance: " << balance <<endl;
        }
    }
};

int main(){

    BankAccount b1(1234567, 20000.00);
    cout<<"Current balance is: " << b1.getBalance() <<endl;
    b1.deposit();
    b1.withdraw();
    

    return 0;

}