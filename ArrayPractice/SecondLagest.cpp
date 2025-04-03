#include<iostream>
using namespace std;

void SecondLargeElement(int arr[] , int size)
{
    int first = arr[0];
    int second = -1;
    for(int i=1; i<size; i++)
    {
        
        if(first<arr[i])
        {
            second=first;
            first=arr[i];

        }
    }

    cout<<second;

    
}

int main()
{
    int arr[]={11,22,33,22,44,11};

    int size = sizeof(arr)/sizeof(int);

    SecondLargeElement(arr,size);

    return 0;
}