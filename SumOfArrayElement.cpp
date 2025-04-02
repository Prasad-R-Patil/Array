#include<iostream>
using namespace std;

int SumOfArray(int Arr[],int Size)
{
    int Sum = 0;
    for(int i=0; i<Size; i++)
    {
        Sum = Sum + Arr[i];
    }

    return Sum;
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

    int Result = SumOfArray(Arr ,Element);

    cout<<"Sum of Array element is :- "<<Result<<endl;

return 0;

}