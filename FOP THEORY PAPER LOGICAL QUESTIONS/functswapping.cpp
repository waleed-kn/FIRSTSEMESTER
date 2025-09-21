#include <iostream>
using namespace std;
int calculate(int x,int y){
    x=x+y;
    y=x-y;
    x=x+y;
    return x+y;
}
int main()
{
    int a=5,b=8;
    cout<<calculate(a,b)<<endl;
}