#include<iostream>
using namespace std;
class Sum{
    private: int x,y;
    public: void Add(int A, int B){
        cout<<"Enter the value of x: ";
        cin>>x;
        cout<<endl<<"Enter the value of y: "<<endl;
        cin>>y;
        cout<<"The sum is "<<x+y;
        
    }
};
int main()
{
    Sum S1;     //object is created for class
    int P,Q;
    S1.Add(P,Q);
    return 0;
};
// Class => The collection of similar type of objects is called Class..