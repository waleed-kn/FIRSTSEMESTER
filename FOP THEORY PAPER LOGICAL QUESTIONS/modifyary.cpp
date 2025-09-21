#include<iostream>
using namespace std;
void modifyarray(int arr[]){
    arr[4]=15;
    arr[5]=20;
}
int main()
{
    int myarr[]={1,2,3,4,5};
    modifyarray(myarr);
    cout<<myarr[4]<<myarr[5]<<endl;

}