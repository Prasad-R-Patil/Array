#include<iostream>
using namespace std;

int SwapElement(int Arr[],int Size)
{
    for(int i=0; i<Size-1; i=i+2)
    {
        int temp = Arr[i];
        Arr[i]=Arr[i+1];
        Arr[i+1]=temp;
    }

    cout<<"Swapped Array :-  ";
    for(int i=0; i<Size; i++)
    {
        cout<<Arr[i]<<" ";
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

         SwapElement(Arr,Element);



    return 0;
}