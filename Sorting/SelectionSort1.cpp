#include<iostream>
using namespace std;


void SelectionSort(int arr[] , int n)
{
    
    for(int i=0; i<n-1; i++)
    {
        int smallestIndex = i;

        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[smallestIndex] )
            {
                smallestIndex = j;
            }
        }

        swap(arr[i],arr[smallestIndex]);

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