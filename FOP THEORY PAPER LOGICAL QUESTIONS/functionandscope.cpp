#include<iostream>
using namespace std;
int sum(int a,int b){
    a=a+b;
    return a;
}
int main()
{
    int x=3,y=5;
    cout<<sum(x,y)<<" "<<x<<endl;
}