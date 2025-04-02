#include<iostream>
using namespace std;

bool isPerfect(int num)
{
    if(num<=1) return false;

    int sum=0;
    for(int i=1; i<=num/2; i++)
    {
        if((num % i) == 0)
        {
            sum = sum+i;
        }
    }
    return sum == num;
}



void CheckPerfectElement(int Arr[] , int size)
{
    cout<<"Perfect Element in the Array :- ";
     bool found = false;

    for(int i=0; i<size; i++)
    {
        if(isPerfect(Arr[i]))
        {
            cout<<Arr[i]<<" ";
            found = true;

        }
    }
        if (!found)
        {
        cout << "None";
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

   
    CheckPerfectElement(Arr, Element);

    // Free  dynamically allocated memory
    delete[] Arr;

    return 0;
}
