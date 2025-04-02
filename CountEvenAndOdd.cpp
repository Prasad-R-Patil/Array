#include<iostream>
using namespace std;

int CheckEvenOdd(int Arr[],int Size)
{
    int check = 0;
    int Even[Size];
    int Odd[Size];
    for(int i=0; i<Size; i++)
    {
        check = Arr[i];
        
        if(check%2==0)
        {
            cout<<"Even No :- "<<check<<endl;
            
        }
        else
        {
            cout<<"Odd No"<<check<<endl;
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

    int Result = CheckEvenOdd(Arr,Element);




    return 0;
}