#include<iostream>
using namespace std;
int main()
{
    int num,reversednum=0;
    cout<<"enter the integer "<<endl;
    cin>>num;
    while(num!=1){
        int digit=num%10;
        reversednum=reversednum*10+digit;
        num/=10;
        
    }
    cout<<"reversed number"<<reversednum<<endl;
}