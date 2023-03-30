// Static Data=> The data which is globally shared by all the objects of that class is called Static Data..
// Characteristics: - Initially, The value of the static data is '0'.
//                  - The Static should be declared inside of the class and should be defined outside of the class
//                  - The value for all the objects of static data remains same.
//                  - It is visible only within the class but its lifetime is in the entire program...

#include<iostream>
using namespace std;
class static_data{
static int a;
public:
void display()
{
cout<<"The value of a is: "<<a<<endl;
a++;
}

};
int static_data::a=10;
int main()
{
    static_data A;
    A.display();
    A.display();
    A.display();
    A.display();
    A.display();
    return 0;
}