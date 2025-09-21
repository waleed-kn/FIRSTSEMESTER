#include<iostream>
using namespace std;
void printarr(int arr[][3],int rows){
    for(int i=0; i<rows; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[2][3]={
        {2,3,5},
        {6,4,3}
    };
    printarr(arr,2);
}