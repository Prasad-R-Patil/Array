#include<iostream>
using namespace std;


bool isPalindromic(int Arr[] , int size)
{
    for(int i=0; i<size; i++)
    {
        if(Arr[i] != Arr[size -1 -i])
        {
            return false;
        }
    }
        return true;
}

void CheckPalindromic(int Arr[] , int size)
{
   
        if(isPalindromic(Arr,size))
        {
            cout<<"Is Palindromic Array : -";
        }
        else
        {
            cout<<"Is Not Palindromic Array : -";
        }
    
}


int main()
{
    int Element = 0;
    cout<<"Enter the Size of Array :- ";
    cin>>Element;

    int* Arr = new int[Element];

    for(int i=0; i<Element; i++)
    {
        cin>>Arr[i];
    }

    CheckPalindromic(Arr,Element);

    delete[] Arr;

    return 0;
}
