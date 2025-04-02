#include<iostream>
using namespace std;

void SearchElement(int Arr[] , int size , int value)
{
    cout << "Searching for " << value << " in the array..." << endl;

    for(int i=0; i<size; i++)
    {
        if(Arr[i] == value)
        {
            cout << "Element found at position: " << i + 1 << endl;
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

    int Data;
    cout<<"Enter Element to you search :- ";
    cin>>Data;
   
    SearchElement(Arr, Element,Data);

    // Free  dynamically allocated memory
    delete[] Arr;

    return 0;
}
