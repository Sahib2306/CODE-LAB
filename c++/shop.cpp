#include<iostream>
using namespace std;
class customer{
    public:
    int age;
    string name;
    void get_info(){
        cout<<"enter your name: ";
        cin>>name;
        cout<<"Enter your age: ";
        cin>>age;
    }
    void display_info(){
        cout<<"Your name is: "<<name<<"age is : "<<age<<endl;
        
    }
};
class order_d{
    public:
    int qty;
    string name_p;
    float price;
    int t;

    void get_d(){
        cout<<"Enter product name: ";
        cin>>name_p;
        cout<<"Enter Quantity of "<<name_p<<": ";
        cin>>qty;
        cout<<"Enter price of "<<name_p<<": ";
        cin>>price;
    }
    void total(){
    
        t=qty*price;
    }
    
};
// MULTIPLE INHERITENCE
class online_purchase:public customer,public order_d{
    public:
    float bill;
    void display(){
        cout<<"============================================"<<endl;
        cout<<"     WELCOME TO CAP:281 SHOPPING CENTRE "<<endl;
        cout<<"NAME: "<<name<<endl;
        cout<<"AGE: "<<age<<endl;
        cout<<"Product: "<<name_p<<endl;
        cout<<"PRICE OF PRODUCT: "<<price<<endl;
        cout<<"TOTAL BILL IS : "<<t<<endl;

        cout<<"         THANK YOU! VISIT AGAIN "<<endl;
        cout<<"============================================"<<endl;



    }
};
int main(){
    online_purchase oc;
    oc.get_info();  
    oc.get_d();     
    oc.total();
    oc.display();
    return 0;
}