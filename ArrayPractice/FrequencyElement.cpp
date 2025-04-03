#include<iostream>
using namespace std;

void Frequency(int arr[] , int size)
{
    bool counted[size] = {false}; 
    int cnt=0;

    for(int i=0; i<size; i++)
    {
        if (counted[i]) 
        continue;


        cnt=1;
        for(int j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                cnt++;
                counted[j] = true;
            }
        }

        cout<<arr[i]<<" => "<<cnt<<endl;
    }
}

int main()
{
    int arr[]={2,3,2,3,1,3};

    int size = sizeof(arr)/sizeof(int);

    Frequency(arr,size);

    return 0;

}