//The Errors that occur while execution of code are called exceptions...
#include<iostream>
using namespace std;
int main()
{
    int mom_age,son_age;
    try{
    cout<<"Enter the age of mom: "<<endl;
    cin>>mom_age;
    cout<<"Enter the age of son: "<<endl;
    cin>>son_age;
    if(son_age>mom_age)
    throw 20;
    cout<<"The age difference between son and mom is "<<mom_age-son_age<<endl;
    }
    catch(int a)
    {
        cout<<"Warning....Mom's age can't be smaller than son's age"<<endl;
    }
    cout<<"End of Program";
    return 0;
}