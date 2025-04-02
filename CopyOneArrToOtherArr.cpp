#include<iostream>
using namespace std;

int* CopyArray(int Arr[],int Size)
{
    int* Arr2 = new int[Size];
    for (int i = 0; i < Size; i++) {
        Arr2[i] = Arr[i];
    }

    return Arr2;
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

    int*Arr2=CopyArray(Arr,Element);
    cout<<"SecondArray :- ";
    for(int i=0; i<Element; i++)
    {
        cout<<Arr2[i]<<" ";
    }




    return 0;
}