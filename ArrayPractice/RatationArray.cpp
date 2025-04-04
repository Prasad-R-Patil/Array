#include<iostream>
using namespace std;
 

void RotationArray(int arr[] , int n ,int d)
{
    for(int i=0; i<d; i++)
    {
        int first = arr[0];

        for(int j=0; j<n-1; j++)
        {
            arr[j] = arr[j+1];
        }
        arr[n-1]=first;
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
 
int main()
{
    
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);

    int d=2;

    RotationArray(arr,size,d);


 
 
 return 0;
}