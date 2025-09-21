#include <iostream>
using namespace std;
int findmax(int arr[],int size){
    int maxval=arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]>maxval){
        maxval=arr[i];
    }
}
return maxval;
}
int main()
{
    int arr[]={1,3,4,5,6,7,435,632};
    int size=8;
    cout<<"maximum values"<<findmax(arr,size)<<endl;
}
