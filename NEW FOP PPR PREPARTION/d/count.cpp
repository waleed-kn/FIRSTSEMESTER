#include<iostream>
using namespace std;
int main()
{
    int num,count=0;
    cout<<"enter the number"<<endl;
    cin>>num;
    if(num==0){
        count=1;
    }
    else{
        while(num!=0){
            num/=10;
            count++;
        }
    }
    cout<<"the number of the digit is "<<count<<endl;
}