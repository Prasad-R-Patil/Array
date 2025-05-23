#include<iostream>
using namespace std;


void InsertionSort(int arr[] , int n)
{
    
   for(int i=1; i<n; i++)       
   {
        int curr = arr[i];       
        int prev = i-1;         

        while((prev>=0) && (arr[prev] > curr))   
        {
            arr[prev+1] = arr[prev];     

            prev--;
        }

        arr[prev+1] = curr;  
   }




    cout<<"\n--------------------------------\n"<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }


}





int main()
{
    int arr[]={4,1,3,2,5,-6};

    //int arr[]={5,4,3,2,1};

    int n= sizeof(arr)/sizeof(int);

    cout<<"\n--------------------------------"<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\n--------------------------------"<<endl;

    InsertionSort(arr,n);

    cout<<"\n--------------------------------"<<endl;

    return 0;
}