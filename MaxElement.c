#include<stdio.h>


void MAX(int arr[] , int s)
{
    int max = 0;

    for(int i=1; i<s; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
            continue;
        }

     
    }

    printf("Max element is :- %d ",max);
}

int main()
{
    int size = 5;

    int arr[] = {11,22,12,55,32};

    
    MAX(arr,size);

   

    
return 0;

}