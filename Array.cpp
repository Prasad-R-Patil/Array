#include<iostream>
using namespace std;
 
 
int main()
{
 
 int arr[]={1,2,3,4,5,6};
 int n = sizeof(arr) / sizeof(arr[0]);
 
 for (int i = 0; i < n; i++)
 {
    cout << arr[i] << " ";
 }
        
    cout << endl;

    int start=0;
    int end = n-1;

    while(start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
 {
    cout << arr[i] << " ";
 }
        
    cout << endl;

 
 
 return 0;
}