#include<iostream>
using namespace std;

int UniqueNo(int Arr[],int Size)
{
    
     cout << "Unique elements in the array:- ";
     
    for(int i=0; i<Size; i++)
    {
        
        int count = 0;

        for(int j=0; j<Size; j++)
        {
            if(Arr[i] == Arr[j])
            {
                count++;
            }
                    
        }

        if(count == 1)
        {
            cout<<Arr[i]<<" ";
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

         UniqueNo(Arr,Element);



    return 0;
}