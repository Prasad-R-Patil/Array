#include<iostream>
using namespace std;

int FreqElement(int Arr[],int Size)
{
    bool Visited[Size] = {false};

    for(int i=0; i<Size; i++)
    {
        if(Visited[i])
        continue;

        int count = 1;

        for(int j=i+1; j<Size; j++)
        {
            if(Arr[i] == Arr[j])
            {
                count++;
                Visited[j]=true;
            }
        }

        cout<<Arr[i]<<" is "<<count<<" time "<<endl;
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

         FreqElement(Arr,Element);



    return 0;
}