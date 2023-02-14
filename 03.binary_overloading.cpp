#include <iostream>
using namespace std;

class maths
{
public:
    int a;
    int b;
    
    void setdata(int x, int y){
        a=x;
        b=y;
    }
    void getdata()
    {
        cout << "the value is : " << a << endl;
        cout << " the value is : " << b << endl;
    }
    maths operator+(maths &t)
    {
        maths m;
        m.a = a + t.a;
        m.b = b + t.b;
        return m;
    }
};

int main()
{   
    maths m1, m2, m3;
  
    m1.setdata(4,5);
    m2.setdata(5,4);

    m3 = m1 + m2;

    m1.getdata();
    m2.getdata();

    m3.getdata();

    return 0;
}