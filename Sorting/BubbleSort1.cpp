#include<iostream>
using namespace std;


void BubbleSort(int arr[] , int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }

        for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }

    cout<<"\n--------------------------------\n"<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }




}





int main()
{
    //int arr[]={4,1,3,2,5};

    int arr[]={5,4,3,2,1};

    int n= sizeof(arr)/sizeof(int);

    cout<<"\n--------------------------------"<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\n--------------------------------"<<endl;

    BubbleSort(arr,n);
    
    cout<<"\n--------------------------------"<<endl;

    return 0;
}