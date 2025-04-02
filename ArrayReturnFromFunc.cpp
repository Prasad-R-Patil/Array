#include<iostream>
using namespace std;

int* AcceptArray(int& size)
{
    // Dynamically allocate memory for the array
    static int Arr[5] ={1, 2, 3, 4, 5};
 

   size=sizeof(Arr)/sizeof(Arr[0]);
    
    return Arr;  // Return the pointer to the dynamically allocated array
}

void DisplayArr(int Arr[], int iSize)
{
    cout << "Entered Display" << endl;
   
    for (int i = 0; i < iSize; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int* Arr = NULL;
    int iSize = 0;
    
    // Get the pointer to the dynamically allocated array
    Arr = AcceptArray(iSize);

    // Display the array
    DisplayArr(Arr, iSize);

    // Free the dynamically allocated memory
    delete[] Arr;

    return 0;
}
