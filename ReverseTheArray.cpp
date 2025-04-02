#include<iostream>
using namespace std;


void ReverseArray(int Arr[] , int size)
{
    int start = 0;
    int end = size - 1;

    while(start<end)
    {
        int temp = Arr[start];
        Arr[start] = Arr[end];
        Arr[end] = temp;

        start++;
        end--;
    }

    cout<<"Reverse Array :- ";

    for(int i=0; i<size; i++)
    {
        cout<<Arr[i]<<" ";
    }
}


int main()
{
    int Element = 0;
    cout << "Enter the number of elements: ";
    cin >> Element;

    if (Element <= 0) {
        cout << "Invalid number of elements!" << endl;
        return 0;
    }

   
    int* Arr = new int[Element];

    cout << "Enter your data:" << endl;
    for (int i = 0; i < Element; i++) {
        cin >> Arr[i];
    }

   
    ReverseArray(Arr, Element);

    // Free  dynamically allocated memory
    delete[] Arr;

    return 0;
}
