#include<iostream>
using namespace std;
int findmax(int a,int b,int c){
    if (a>=b && a>=c){
        return a;
    }
    else if(b>=a && b>=c){
        return b;
    }
    else{
        return c;
    }
}
int main()
{
    int num1,num2,num3;
    cout<<"enter the number"<<endl;
    cin>>num1>>num2>>num3;
    int max=findmax(num1,num2,num3);
    cout<<"maximum number is"<<max<<endl;
}