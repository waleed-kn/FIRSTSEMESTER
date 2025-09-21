#include<iostream>
using namespace std;
bool prime(int n){
    if(n<=0){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int num;
    cout<<"enter the number "<<endl;
    cin>>num;
    if(prime(num)){
        cout<<"number is prime"<<endl;
    }
    else{
        cout<<"number is not a prime number"<<endl;
    }
}