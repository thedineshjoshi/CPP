//WAP to swap two numbers using DMA
#include<iostream>
using namespace std;
int main()
{
    int temp,*ptr;
    for(int i=0;i<2;i++)
    {
    cout<<"Enter the value of "<<i+1<<" place : ";
    cin>>ptr[i];
    }
    temp=ptr[0];
    ptr[0]=ptr[1];
    ptr[1]=temp;
    cout<<"After Swapping"<<endl;
    cout<<"The first place swapped value is "<<ptr[0]<<endl;
    cout<<"The second place swapped value is "<<ptr[1];
    delete []ptr;
    return 0;
}