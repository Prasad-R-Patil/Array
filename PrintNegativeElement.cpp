#include<iostream>
using namespace std;
 
 
int main()
{
 int Element = 0;
 cout<<"Enter Element:-  ";
 cin>>Element;

 int Arr[Element];
 cout<<"Enter your data"<< endl;
 for(int i = 0; i < Element; i++)
 {
    cin>>Arr[i];
 }
 cout<<"Negative number"<<endl;
 
 for(int i = 0; i < Element; i++)
 {
    if(Arr[i]<0)
    {
        cout<<Arr[i]<< " ";
    }

 }
 
 return 0;
}