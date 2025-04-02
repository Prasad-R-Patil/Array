#include<iostream>
using namespace std;

int MinimumElement(int Arr[],int Size)
{
    int MinimumElement = Arr[0];
    for(int i=1; i<Size; i++)
    {
        if(MinimumElement>Arr[i])
        {
            MinimumElement = Arr[i];
        }
    }
   return MinimumElement;
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

    int Result = MinimumElement(Arr ,Element);

    cout<<"Minimum  Array element is :- "<<Result<<endl;

return 0;

}