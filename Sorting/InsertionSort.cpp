#include<iostream>
using namespace std;


void InsertionSort(int arr[] , int n)
{
    
   for(int i=1; i<n; i++)       // consider 0[index] my sorted element && my arr[1] are unsorted array first index
   {
        int curr = arr[i];      // unsorted element are every iteration i condider 
        int prev = i-1;         // sorted element are every iteration i-1 condider

        while((prev>=0) && (arr[prev] > curr))   //loop iteration backword direction((prev value 0 or >0) && (array previous > current))
        {
            arr[prev+1] = arr[prev];     // that time array of [prev + 1] in array of prev insert

            prev--;
        }

        arr[prev+1] = curr;   // Right position current element
   }




    cout<<"\n--------------------------------\n"<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }


}





int main()
{
    int arr[]={4,1,3,2,5};

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