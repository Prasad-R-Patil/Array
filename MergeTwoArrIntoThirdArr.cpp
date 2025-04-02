#include<iostream>
using namespace std;

void MergeTwoArray(int Arr1[],int size1, int Arr2[], int size2 , int Arr3[])
{
    int i=0;
    int j=0;
    int k=0;

    while (i<size1)
    {
       Arr3[k++] = Arr1[i++];
    }

    while (j<size2)
    {
       Arr3[k++] = Arr2[j++];
    }
   
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
    int Element1 = 0;
    cout << "Enter the number of elements for 1st Array: ";
    cin >> Element1;

    if (Element1 <= 0) {
        cout << "Invalid number of elements!" << endl;
        return 0;
    }

   
    int* Arr1 = new int[Element1];

    cout << "Enter your data:" << endl;
    for (int i = 0; i < Element1; i++) {
        cin >> Arr1[i];
    }

   
    


    int Element2 = 0;
    cout << "Enter the number of elements for 2nd Array: ";
    cin >> Element2;

    if (Element2 <= 0) {
        cout << "Invalid number of elements!" << endl;
        return 0;
    }


     int* Arr2 = new int[Element2];

    cout << "Enter your data:" << endl;
    for (int i = 0; i < Element2; i++) {
        cin >> Arr2[i];
    }

    int* Arr3 = new int[Element1 + Element2];
    MergeTwoArray(Arr1, Element1 , Arr2, Element2, Arr3);

    cout<<"The Merged Array is :- ";
    PrintArray(Arr3, Element1 + Element2);

    // Free  dynamically allocated memory
    delete[] Arr1;
    delete[] Arr2;
    delete[] Arr3;

    return 0;
}
