#include<iostream>
#include<cmath>
using namespace std;

int ArmstrongElement(int Arr[], int size)
{

   // cout<<"Armstrong Element in the Array :- ";
    for(int i=0; i<size; i++)
    {
        int num = Arr[i];
        int orignalNum = num;
        int sum = 0;
        int digits = 0;

        while(num != 0)
        {
            num = num / 10;
            digits++; 
        }

        num = orignalNum;

        while(num != 0)
        {
            int digit = num % 10;
            sum = sum + pow(digit, digits);
            num = num/10;
        }

        if(sum == orignalNum)
        {
            cout<<orignalNum<<" ";
        }
    }


}


int main()
{

int Element = 0;

    cout<<"Enter Number OF Element :-  ";
    cin>>Element;

    int Arr[Element];
    
    cout<<"Enter Element :- "<<endl;
    for(int i=0; i<Element; i++)
    {
        cin>>Arr[i];

    }

    ArmstrongElement(Arr,Element);


    return 0 ;
}