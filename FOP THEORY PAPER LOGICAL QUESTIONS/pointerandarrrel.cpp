#include<iostream>
using namespace std;
void modifyelement(int* ptr){
    *ptr=44;
}
int main()
{
    int arr[]={1,2,3,4,5,};
    modifyelement(arr+2);
    cout<<arr[2]<<endl;
}