#include<iostream>
using namespace std;

int main()
{
    int Element = 0;
    
    cout<<"Enter Number of Element  :-  ";
    cin>>Element;
    cout<<"\n";

    cout<<"Enter Your Data "<<endl;
    int Array[Element];

    for(int i = 0; i < Element; i++)
    {
        cin >> Array[i];
    }
    cout<<"\n";
    cout<<"This is your Array Element"<<endl;
    cout<<"\n";
    
    for(int i=0; i < Element; i++)
    {
        cout<< Array[i] <<" ";
    }
    cout<<"\n";

    
    return 0;

}