// The process of using same function name for different purposes is called function overloading...
// THe functions are distinguished on the basic of number of arguments.. If they have same number of arguments then they are distinguished by the type of arguments...
#include<iostream>
using namespace std;
void area(int l, int b)
{
    int m=l*b;
    cout<<"The area is "<<m<<endl;

}
void area(int l, int b, int h)
{
    int n=2*h*(l+b);
    cout<<"The area is "<<n;
}
int main()
{   int a,b,c;
    cout<<"Enter the value of l"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    cout<<"Enter the value of c"<<endl;
    cin>>c;
    area(a,b);
    area(a,b,c);
    return 0;
}