#include<iostream>
using namespace std;
int sumarray(int arr[],int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=sumarray(arr,size);
    cout<<"the sum of the all element is "<<result<<endl;
}