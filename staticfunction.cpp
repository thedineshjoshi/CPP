// staticFunction => A function which can access only static data of the same class is called static function.
// We call static Function as Normal Function Call...
#include<iostream>
using namespace std;
class records{
    public:
    char Name[20],Semester[20];
    int Roll,Mark;
    static int id;
    void get_Student()
    {
        cout<<"Enter the details of the students "<<endl;
        cout<<"Enter Student's Name: ";
        cin>>Name;
        cout<<endl<<"Roll:";
        cin>>Roll;
        cout<<endl<<"Mark:";
        cin>>Mark;
        cout<<endl<<"Semester:";
        cin>>Semester;

    }
    static void count()
    {
        cout<<id<<"\t";
        id++;
    }
    void display_student()
    {
        cout<<Name<<"\t"<<Roll<<"\t"<<Mark<<"\t"<<Semester<<endl;
    }

};
int records::id=1;
int main()
{
    records R1,R2,R3,R4;
    R1.get_Student();
    R2.get_Student();
    R3.get_Student();
    R4.get_Student();
    cout<<"S.N."<<"\t"<<"Name"<<"\t"<<"Roll"<<"\t"<<"Mark"<<"\t"<<"Semester"<<endl;
    records::count();
    R1.display_student();
    records::count();
    R2.display_student();
    records::count();
    R3.display_student();
    records::count();
    R4.display_student();
    cout<<"End of the Program";
    return 0;
}