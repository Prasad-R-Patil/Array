#include<iostream>
using namespace std;

bool isPalimdrome(int num)
{
    int OrgNum = num;
    int RevNum = 0;

    while(num > 0)
    {
        int digit = 0;
        digit = num%10;
        RevNum = RevNum*10+digit;
        num = num/10;
    }

    return OrgNum == RevNum;
}

void PalindromeElement(int Arr[] , int size)
{
    cout<<"Palindrome Element in the Array :- ";
    for(int i=0; i<size; i++)
    {
        if(isPalimdrome(Arr[i]))
        {
            cout<<Arr[i]<<" ";
        }
    }

}

int main()
{
    int Element = 0;
    cout<<"Enter no of Element :- ";
    cin>>Element;

    int Arr[Element];

    cout<<"Enter Your Data :- "<<endl;
    for(int i=0; i<Element; i++)
    {
        cin>>Arr[i];
    }

    PalindromeElement(Arr,Element);





return 0;
}
