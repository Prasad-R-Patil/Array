#include<iostream>
using namespace std;

int SecondLargeElement(int Arr[],int Size)
{
    int LargeElement = Arr[0];
    int SecondLargeElement = -1;

    for(int i=1; i<Size; i++)
    {
        if(Arr[i]>LargeElement)
        {
             SecondLargeElement = LargeElement;
             LargeElement = Arr[i];
        }
        else if(Arr[i]>SecondLargeElement && Arr[i] != LargeElement)
        {
            SecondLargeElement = Arr[i];
        }
    }
   return SecondLargeElement;
}
int main()
{
    int Element = 0;

    cout<<"Enter No Of Element:- ";
    cin>>Element;


    int Arr[Element];
    cout<<"Enter Your Data"<<endl;

    for(int i=0; i<Element; i++)
    {
        cin>>Arr[i];
    }

    int Result = SecondLargeElement(Arr ,Element);

    if(Result == -1)
    {
        cout<<"is not Second Large element is :- "<<Result<<endl;
    }
    else
    {
        cout<<"Second Large element is :- "<<Result<<endl;
    }

    

return 0;

}