#include<iostream>
using namespace std;
void displaymenu(){
    cout<<"//---------ATM--------//"<<endl;
    cout<<"1 : CHECK BALANCE"<<endl;
    cout<<"2 : DEPOSIT MONEY"<<endl;
    cout<<"3 : WITHDRAW MONEY"<<endl;
    cout<<"4 : EXIT "<<endl;
    cout<<"//-----------------------------//"<<endl;
    cout<<"PLAESE ENTER YOUR CHOICE"<<endl;
}
int main()
{
    double balance=10000.0;
    int choice; 
    double amount;
    do{
        displaymenu();
        cin>>choice;
        switch(choice){
        case 1:
        cout<<"YOUR CURRENT  balance IS "<<balance<<endl;
        break;
        case 2:
        cout<<"ENTER AMOUNT TO DEPOSIT"<<endl;
        cin>>amount;
        if(amount>0){
        balance+=amount;
        cout<<"YOUR NEW BALANCE IS "<<" : "<<balance<<endl;
        }
        else{
            cout<<"INVALID PLEASE ENTER POSITIVE NUMBERS"<<endl;
        }
        break;
        case 3:
        cout<<"ENTER AMOUNT TO WITH DRAW "<<endl;
        cin>>amount;
        if (amount > 0 &&  amount <= balance){
        balance-=amount;
        cout<<"YOUR REMAINING BALANCE IS "<<balance<<endl;
        }
        else if(amount>balance){
            cout<<"YOU ENTER AMOUNT FOR WITHDRAW IS INSUFFICENT"<<balance<<endl;
        }
        else{
            cout<<"INVALID PLEASE ENTER A POSTIVE NUMBERS"<<endl;
        }
        break;
        case 4:
        cout<<"THANKYOU !!! FOR USING OUR SERVICE "<<endl;
        break;
        default:
        cout<<"INVALID CHOICE PLEASE TRY AGAIN!!!!"<<endl;
        break; 
        }   
    }while(choice!=4);
    return 0;
}