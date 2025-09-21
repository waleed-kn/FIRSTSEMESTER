#include<iostream>
using namespace std;
int sum(int &a,int &b){
    return a+b;
}
int main(){
    int x=3,y=5;
    int result=sum(x,y);
    cout<<"sum of the numbers is "<<result<<endl;
}