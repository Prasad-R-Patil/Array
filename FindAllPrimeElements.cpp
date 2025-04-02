#include<iostream>
using namespace std;

bool CheckPrime(int num)
{
    if(num<=1) return false;
    for(int i=2; i<num/2; i++)
    {
        if((num%i)==0)
        {
            return false;
        }
    }

    return true;
}


void CheckPrimeElement(int Arr[] , int size)
{
    cout<<"The peime Element in the Array :- ";

    for(int i=0; i<size; i++)
    {
        if(CheckPrime(Arr[i]))
        {
            cout<<Arr[i]<<" ";
        }
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

   
    CheckPrimeElement(Arr, Element);

    // Free  dynamically allocated memory
    delete[] Arr;

    return 0;
}
