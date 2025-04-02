#include<iostream>
using namespace std;

int RevNo(int num)
{
    int Rev = 0;
    int digit = 0;

    while(num > 0)
    {
        
        digit = num % 10;
        Rev = Rev * 10 + digit;
        num=num/10;
    }
    
    //cout<<Rev;

    return Rev;

}


void ReverseElement(int Arr[], int size)
{
    cout<<"All Element are reversed :-  ";

    for(int i=0; i<size; i++)
    {
        if(Arr[i] > 0)
        {
            Arr[i] =RevNo(Arr[i]);
        }
        cout<<Arr[i]<<" ";
    }



}



int main()
{
    int Element = 0;
    cout << "Enter the number of elements: ";
    cin >> Element;

    if (Element <= 0) {
        cout << "Invalid number of elements!" << endl;
        return 0;
    }

   
    int* Arr = new int[Element];

    cout << "Enter your data:" << endl;
    for (int i = 0; i < Element; i++) {
        cin >> Arr[i];
    }

   
    ReverseElement(Arr, Element);

    // Free  dynamically allocated memory
    delete[] Arr;

    return 0;
}
