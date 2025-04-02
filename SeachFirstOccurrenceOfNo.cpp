#include<iostream>
using namespace std;

int FindFirstOccurrence(int Arr[], int size , int No)
{
    for(int i=0; i<size; i++)
    {
        if(Arr[i] == No)
        {
            return i;
        }
    }

    return -1;
}


int main()
{
    int Element = 0;
    int Number = 0;

    cout<<"Enter No of Element of Array :- ";
    cin>>Element;

    int* Arr = new int[Element];

    for(int i=0; i<Element; i++)
    {
        cin>>Arr[i];
    }

    cout<<"Enter Number find First Occurrence :- ";
    cin>>Number;

    int Result = FindFirstOccurrence(Arr,Element,Number);

    if(Result != -1)
    {
        cout<<"The Number {"<<Number<<"} First Occurrence is :- "<<Result<<" index"<<endl;
    }
    else
    {
        cout<<"The Number Not Found :-  "<<Number<<endl;
    }

    delete[] Arr;

    return 0;
}