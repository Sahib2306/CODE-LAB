// Single inheritance
#include<iostream>
using namespace std;
class car{
    string name;
    int model;
    string type;

    public:
    void info(){
        cout<<"Enter car name: ";
        cin>>name;
        cout<<"Enter the model of car: ";
        cin>>model;
        cout<<"Enter Car type: ";
        cin>>type;
    }

    void display_info(){
        cout<<endl<<"the name of car is : "<<name<<endl;
        cout<<"The model of the car is : "<<model<<endl;
        cout<<"the type of car is : "<<type<<endl;
    }
    

};
class delivery : public car{
    public:
    int date;
    string month;
    

    void get_date(){
        cout<<"enter date you want the car delivery: ";
        cin>>date;
        cout<<"Enter month(like jan,feb): ";
        cin>>month;
    }
    void display(){
        display_info();
        cout<<"You will get delivery of car around "<<date<<","<<month;
    }
    
};
int main(){
    
    delivery d1;
    d1.info();
    d1.get_date();
    d1.display();
    return 0;
}