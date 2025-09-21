#include<iostream>
using namespace std;
void minmax(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=20,b=40;
    cout<<"before the swapping the program is"<<a<<"a"<<b<<endl;
    minmax(a,b);
    cout<<"after the swapping the program is "<<a<<"b"<<b<<endl;
}