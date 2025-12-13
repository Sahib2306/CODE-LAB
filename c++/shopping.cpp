#include<iostream>
using namespace std;
class shopping{
    
    string cname;
    string pname;
    float price;
    public:
    shopping(){
        cname="Customer name unknown";
        pname="Product not purchased";
        price=0;
        cout<<"default constructor called"<<endl;
    }

    
    void get_info(){
        cout<<"Enter name fo the customer: ";
        cin>>cname;
        cout<<"Enter the name of the product:";
        cin>>pname;
        cout<<"Enter the price of the product: ";
        cin>>price;

    }
    void display(){
        cout<<"the name of the customer is: "<<cname<<endl;
        cout<<"The name of the product is:  "<<pname<<endl;
        cout<<"the price of product is: "<<price<<endl;

    }
    
};
int main(){
    shopping s,s1;
    // s1.get_info();
    s.display();
    s1.get_info();
    s1.display();

    return 0;
}