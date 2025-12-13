#include<iostream>
using namespace std;
class car{
    public:
    string name;
    int year;
   
    car(){
        name="Unknown";
        year=0;
    }
    car(string n, int y){
        name=n;
        year=y;
    }
    void display(){
        cout<<name<<endl;
        cout<<year;
    }
};
int main(){
    car c;
    cout<< c.name << " " << c.year << endl;
     car c1("toyota",2010);
     cout<< c1.name << " " << c1.year << endl;
    return 0;
}