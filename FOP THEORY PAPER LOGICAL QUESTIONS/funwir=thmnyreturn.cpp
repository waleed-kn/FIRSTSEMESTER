#include <iostream>
using namespace std;
int mystery(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}
int main()
{
    int x=5,y=10;
    cout<<mystery(x,y)<<endl;
    x=12;
    y=3;
    cout<<mystery(x,y)<<endl;
}