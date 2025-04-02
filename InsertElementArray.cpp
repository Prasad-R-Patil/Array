#include<iostream>
using namespace std;

int InsertElement(int Arr[],int Size)
{
   int Position = 0;
   int Element = 0;

   cout<<"Enter Position to Add New Element:- ";
   cin>>Position;
   cout<<"Enter Element to You add in Array:- ";
   cin>> Element;

   for(int i=Size; i>Position; i--)
   {
        Arr[i]=Arr[i-1];
   }

   Arr[Position]=Element;
   Size++;

   cout<<"Array With Insert New Element :- ";
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

   InsertElement(Arr,Element);



    return 0;
}