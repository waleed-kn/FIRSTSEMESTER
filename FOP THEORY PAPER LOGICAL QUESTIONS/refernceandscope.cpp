#include<iostream>
using namespace std;
void modify(int* ref){
    *ref=70;
}
int main()
{
    int num=30;
    modify(&num);
    cout<<num<<endl;
}