#include<iostream>
using namespace std;


class employee{
    public:
    string name;
    int salary;

    void get_details(){
        cout<<"enter your name: ";
        cin>> name;
        cout<<"enter your salary: ";
        cin>>salary;
    }
    void bonus();
    void display_details(){
        cout<<"employee name is: "<<name;
        cout<<"\nemployee salary is: "<<salary<<endl;
        bonus();

    }
};
void employee :: bonus(){
    int bonus = salary+(salary*10/100);
    cout<<"Your bonus is : "<<bonus;
}
int main(){

    employee E1;
    E1.get_details();
    E1.display_details();

    return 0;

}
    
