#include<iostream>
using namespace std;

int DeleteElement(int Arr[],int Size)
{
   int Position = 0;
  
   cout<<"Enter Position to Delete  Element:- ";
   cin>>Position;
   
   if(Position < 0 || Position>Size)
   {
     cout<<"Invalid Position....."<<endl;
   }
   else
   {
        for(int i=Position; i<Size-1; i++)
        {
            Arr[i]=Arr[i+1];
        }
   }

   Size--;

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

   DeleteElement(Arr,Element);



    return 0;
}