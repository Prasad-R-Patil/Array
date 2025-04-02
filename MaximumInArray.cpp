#include<iostream>
using namespace std;

int MaximumElement(int Arr[],int Size)
{
    int MaximumElement = Arr[0];
    for(int i=1; i<Size; i++)
    {
        if(MaximumElement<Arr[i])
        {
            MaximumElement=Arr[i];
        }
    }

    return MaximumElement;
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

    int Result = MaximumElement(Arr ,Element);

    cout<<"Maximum  Array element is :- "<<Result<<endl;

return 0;

}