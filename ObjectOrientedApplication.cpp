#include <iostream>
using namespace std;
class ArrayDemo
{
    protected:

    int *Arr;
    int iSize;

    public:

    ArrayDemo(int iSize)
    {
       this->iSize=iSize;
       this->Arr=new int[this->iSize];
    }  

    void AccecptArray()
    {
       cout<<"Enter the element in the array"<<endl;

       for(int i=0;i<iSize;i++)
       {
           cin>>Arr[i];
       }
    }
    void DisplayArray()
    {
        cout<<"Entered elements"<<endl;

        for(int i=0;i<iSize;i++)
        {
            cout<<Arr[i]<<" ";
        }
        cout<<endl;
    }
    virtual int SumOfElements()=0;
};

class ArrayFunc : public ArrayDemo
{
    public:
    
    ArrayFunc(int iSize):ArrayDemo(iSize)
    { 
        
    }
    
    int SumOfElements()
    {
        int iSum=0;

        for(int i=0;i<iSize;i++)
        {
            iSum=iSum+Arr[i];
        }

        return iSum;
    }
};
int main(void)
{
    int iSize=0;

    cout<<"Enter the size of array"<<endl;
    cin>>iSize;

    //ArrayDemo *aobj=new ArrayDemo(iSize);

    ArrayDemo *aobj=new ArrayFunc(iSize);


    aobj->AccecptArray();
    aobj->DisplayArray();
    
    int iRet=0;

    iRet=aobj->SumOfElements();

    cout<<"Sum of array elements is "<<iRet<<endl;

    return 0;
}