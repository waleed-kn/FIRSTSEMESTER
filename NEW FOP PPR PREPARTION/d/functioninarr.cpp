#include<iostream>
using namespace std;
int findmax(int arr[],int size){
    int maxelement=arr[0];
    for(int i=1; i<size; i++){
        if(arr[i]>maxelement){
            maxelement=arr[i];
        }
    }
    return maxelement;
}
int main()
{
    int arr[]={10,20,30,40,50,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"maximum element in the array "<<findmax(arr,size)<<endl;
}