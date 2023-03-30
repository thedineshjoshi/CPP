// Nested Class=> A class inside another class is called Nested Class...
//WAP to convert the age of an Person in seconds...
#include<iostream>
using namespace std;
class personInfo{
    char Name[20];
    public:
    void get_Name()
    {
        cout<<"Enter your Name: ";
        cin>>Name;
    }
    class Age{                          // Nested Class
        int age;
        public:
        void get_age()
        {
            cout<<endl<<"Enter Your Age: ";
            cin>>age;
        }
        void calculate()
        {
            int second= age*365*24*60*60;
            cout<<"The age in second is "<<second<<endl;
            cout<<"Thanks";
        }
    };  
};
int main()
{
    personInfo P1;
    P1.get_Name();
    personInfo::Age P2;
    P2.get_age();
    P2.calculate();
    return 0;

}