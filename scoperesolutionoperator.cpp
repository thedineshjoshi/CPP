#include<iostream>
using namespace std;
class sum{
    private:int x,y;
    public: void add();

};
void sum::add()
{
    cout<<"Enter Values:"<<endl;
    cin>>x>>y;
    cout<<"The sum is "<<x+y;
}
int main()
{
    sum s1;
    s1.add();
    return 0;
}
// Scope resolution operator is used when we have to define a function outside of the class
// and to give the scope of the class under which the function belongs to... 