#include<iostream>
using namespace std;

int FindLastOccurrence(int Arr[], int size , int No)
{
    int LastIndex = -1;
    for(int i=0; i<size; i++)
    {
        if(Arr[i] == No)
        {
            LastIndex = i;
        }
        
    }
    
    return LastIndex;
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

    cout<<"Enter Number find Last Occurrence :- ";
    cin>>Number;

    int Result = FindLastOccurrence(Arr,Element,Number);

    if(Result != -1)
    {
        cout<<"The Number {"<<Number<<"} Last Occurrence is :- "<<Result<<" index"<<endl;
    }
    else
    {
        cout<<"The Number Not Found :-  "<<Number<<endl;
    }

    delete[] Arr;

    return 0;
}