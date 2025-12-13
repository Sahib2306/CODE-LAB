#include<iostream>
using namespace std;
class students
{
    string name;
    int roll_no;
    public:
    int reg_no;
    void get_data(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll number: ";
        cin>>roll_no;
        cout<<"Enter registration number: ";
        cin>>reg_no;
    }
    void display_data(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll number: "<<roll_no<<endl;
        cout<<"Registration number: "<<reg_no<<endl;
    }
    
    
}; 

int main(){
    students s1;
    s1.get_data();
    s1.display_data();
    return 0;

}

