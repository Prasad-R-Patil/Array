#include<iostream>
using namespace std;


void SelectionSort(int arr[] , int n)
{
    
    for(int i=0; i<n-1; i++)         // n-1 -> last index not check
    {
        int smallestIndex = i;      // store unsorted element to swap smallest element in after array 

        for(int j=i+1; j<n; j++)     // j=i=1 -> i consider before index(element) are Sorted...
        {
            if(arr[j] < arr[smallestIndex] )
            {
                smallestIndex = j;
            }
        }

       // swap(arr[i],arr[smallestIndex]);

       int temp = arr[i];
       arr[i] = arr[smallestIndex];
       arr[smallestIndex] = temp;

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

    SelectionSort(arr,n);

    cout<<"\n--------------------------------"<<endl;

    return 0;
}