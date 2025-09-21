#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int max,min;
    cout<<"enter the number "<<endl;
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    max=arr[0];
    min=arr[0];
    for(int i=1; i<10; i++){
        if(arr[i]>max){
            arr[i]=max;
        }
        if(arr[i]<min){
            arr[i]=min;
        }
    }
    cout<<"the maximun of the intger is"<<max<<endl;
    cout<<"the minimum of the integer"<<min<<endl;
}