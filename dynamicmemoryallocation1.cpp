// 1.When we do not know the memory to be allocated before running up the code then we 
// allocate the memory during runtime which is known as dynamic memory allocation.
// 2. We allocate the new address by the keyword 'new' and delete the allocated memory by 'delete' keyword.
// 3. The new operator always returns a pointer which pointing to the allocated memory.

#include<iostream>
using namespace std;
int main()
{
    int *a= new int;
    *a=120;
    cout<<"The value of a is "<<*a<<endl;
    delete a;
    cout<<"The value of a is "<<*a;
    return 0;
}