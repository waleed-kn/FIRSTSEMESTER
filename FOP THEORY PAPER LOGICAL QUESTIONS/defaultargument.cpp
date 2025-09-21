#include<iostream>
using namespace std;
int sum(int a,int b=7){
    return a+b;
}
int main()
{
    cout<<sum(10)<<endl;
    cout<<sum(10,20)<<endl;
    return 0;
}