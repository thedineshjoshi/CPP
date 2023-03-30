#include<iostream>
using namespace std;
class Time{
    int hr,minute;
    public:
    void get_time(int h, int m){
        hr=h;
        cout<<"Enter Time: "<<endl;
        cout<<"Hour = ";
        cin>>hr;
        minute=m;
        cout<<endl<<"minute = ";
        cin>>minute;
    }
    void calculate(Time T1,Time T2){
        minute= T1.minute+T2.minute;
        hr= minute/60;
        minute=minute%60;
        hr=hr+T1.hr+T2.hr;
    }
    void display()
    {
        cout<<"Hour = "<<hr<<endl;
        cout<<"Minutes = "<<minute<<endl;
    }


};
int main()
{   int T4,T5,T6,T7;
    Time T1,T2,T3;
    T1.get_time(T4,T5);
    T2.get_time(T6,T7);
    T3.calculate(T1,T2);
    cout<<"T1 ="<<endl;
    T1.display();
    cout<<"T2 ="<<endl;
    T2.display();
    cout<<"T3 =";
    T3.display();
    return 0;
};