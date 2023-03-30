//Friend Function=> The function which is not the member function of that class but can
// access the private section of that class is called friend function.
// Characteristics of Friend Function:-
//  1) A function is made friend function of that class just by using keyword 'friend' 
//   just before the return type of the function.
//  2) A function is not the member function of that class so it can't be accessed by the 
//     object o that class.
//  3) Important:- To make a function friend of a class we must pass the object of the class
//      as argument in the declaration of friend function class..
// 4) Since, It is not the member function of that class it can be accessed as normal function call..

#include<iostream>
using namespace std;
class Sum{
    int x,y;
    public: 
    void get_values()
    {
        cout<<"Enter the value of x: "<<endl;
        cin>>x;
        cout<<"Enter the value of y: "<<endl;
        cin>>y;
    }
    friend void addition(Sum S1)
    {
        int S= S1.x+S1.y;
        cout<<"The sum is "<<S;
    }
};
int main()
{
    Sum S;
    S.get_values();
    addition(S);
    return 0;
}