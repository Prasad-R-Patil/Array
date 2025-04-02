#include<iostream>
using namespace std;

void RightRotate(int Arr[] , int size , int pos)
{
    pos = pos % 10;

    if(pos==0) return;

    int* temp = new int[size];

    for(int i=0; i<size; i++)
    {
        temp[(i+pos) % size] = Arr[i];
    }
    for(int i=0; i<size; i++)
    {
        Arr[i] = temp[i];
    }

delete[] temp;


}


void PrintArray(int Arr[] , int size)
{
    for (int i = 0; i < size; i++) 
    {
        cout << Arr[i] << " ";
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

    int Index = 0;
    cout << "Enter the number of positions to left rotate: ";
    cin >> Index;

    RightRotate(Arr, Element, Index);

    cout << "Array after left rotation: ";
    PrintArray(Arr, Element);
   
    
    // Free  dynamically allocated memory
    delete[] Arr;

    return 0;
}
