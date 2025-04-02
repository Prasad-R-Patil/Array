#include<iostream>
using namespace std;

int DuplicateArray(int Arr[],int Size)
{
    
     cout << "Duplicate elements in the array:- ";
     
    for(int i=0; i<Size; i++)
    {

        for(int j=i+1; j<Size; j++)
        {
            if(Arr[i] == Arr[j])
            {
                cout<<Arr[i]<<" ";
                break;  
            }
                    
        }

    }
    
}


int main()
{
    int Element = 0;

    cout<<"Enter Number OF Element :-  ";
    cin>>Element;

    int Arr[Element];

    for(int i=0; i<Element; i++)
    {
        cin>>Arr[i];

    }

        DuplicateArray(Arr,Element);

    return 0;
}