#include<iostream>
using namespace std;

int deleteDuplicate(int Arr[],int iSize,int iPos)
{
      if(iPos<0 || iPos>iSize)
      {
          cout<<"Invalid position"<<endl;
          return iSize;
      }

      iSize=iSize-1;

            

      for(int i=iPos;i<iSize;i++)
      {
            Arr[i]=Arr[i+1];
      }
    
      Arr=(int *)realloc(Arr,sizeof(int)*iSize);

      return iSize;



}
void DeleteAllDuplicates(int Arr[],int iSize)
{
    cout<<"Result... :- ";
    for(int i=0;i<iSize;i++)
    {
        for(int j=i+1;j<iSize;j++)
        {
            if(Arr[i]==Arr[j])
            {
                
                iSize=deleteDuplicate(Arr,iSize,j);
                j--;
            }
        }
    }


    for(int i=0;i<iSize;i++)
    {
        cout<<Arr[i]<<" ";
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

         DeleteAllDuplicates(Arr,Element);



    return 0;
}