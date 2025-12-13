// // Multilevel inheritance with default constructor
// #include <iostream>
// using namespace std;
// class person{
//     public: 
//     string name;
//     float age;
//     void get_person(){
//         cout<<"Enter your name: ";
//         cin>>name;
//         cout<<"enter your age: ";
//         cin>>age;
//     }
//     void display_person(){
//         cout<<" The name of person is "<<name<<" and age is: "<<age<<endl;

//     };
//     person(){
//         name="Unknown";
//         age=0;
//     }
// };
// class student:public person{
//     public:
//     float roll_no;
//     string course;
//     void get_info(){
//         cout<<"Enter your roll no: ";
//         cin>>roll_no;
//         cout<<"Enter your course name: ";
//         cin>>course;
//     }
//     void display_info(){
//         cout<<"Student name:  "<<name<<" with roll no: "<<roll_no<<" is persuing : "<<course<<endl;

//     }
//     student():person(){
//         roll_no=0;
//         course="Not persuing";
//     }
// };
// class faculty: public student{
//     public:
//     float faculty_id;
//     string subject;

//     void get_faculty(){
//         cout<<"Enter your faculty id: ";
//         cin>>faculty_id;
//         cout<<"Enter your subject: ";
//         cin>>subject;
//     }
//     void display(){
//         display_person();
//         display_info();
//         cout<<"Faculty id is : "<<faculty_id<<" And subject is: "<<subject<<endl;
//     }
//     faculty():student(){
//         faculty_id=0;
//         subject="no";
//     }

// };



// int main() {
//     faculty f,f1;
//     f.display();
//     f1.get_person();
//     f1.get_info();
//     f1.get_faculty();
//     f1.display();
    
//     return 0;
// }



//  //Static fuel price 
// #include <iostream>
// using namespace std;
// class fuel{
//     public:
//     float static fuel_p;
//     float litre;
//     float total_cost;

//     void get_fuel(){
//         cout<<"Enter the number of litres: ";
//         cin>>litre;

//     }
//     void calculate(){
//         total_cost=litre*fuel_p;

//     }
//     void display(){
//         cout<< "the total cost for "<<litre<<" litres of fuel is :₹ "<<total_cost<<endl;
//     }
//     // static member function
//     static void update(float price){   
//         fuel_p=price;
//     }

// };
// float fuel::fuel_p=100;


// float main() {
//     fuel f1,f2;
//     f1.get_fuel();
//     f1.calculate();
//     f1.display();
//     // upadting the fuel price
//     fuel::update(120);

//     f2.get_fuel();
//     f2.calculate();
//     f2.display();
//     return 0;
// }



// // Destructors
// #include <iostream>
// using namespace std;
// class car{
//     public:
//     string car_name;
//     float days;

//     car(string c="unknown", float d= 0){
//         car_name=c;
//         days=d;
//         cout<<"Constructor Called!"<<endl;

//     };

    
//     void get_car(){
//         cout<<"Enter The name of car you want to rent: ";
//         cin>>car_name;
//         cout<<"Tell the number of days for car rental: ";
//         cin>>days;
//     }

//     void display(){
//         cout<<"Car you rented is : "<<car_name<<" for number of days: "<<days<<endl;
//     }

//     ~car(){
//         cout<<"Destructor called!"<<endl;
//     }


// };


// float main() {
//     car c;
//     c.display();
//     car c1;
//     c1.get_car();
//     c1.display();
//     car c3("AUDI",20);
//     c3.display();
    
    

//     return 0;
// }



// // contructor overloading
// #include <iostream>
// using namespace std;
// class hotel{
//     public:
//     string room;
//     string type;


//     hotel(){
//         room="standard";
//         type="non AC";
//     }
//     hotel(string r,string t){
//         room=r;
//         type=t;
//     }
//     void display(){
//         cout<<"The room you booked was : "<<room<<" and it type was : "<<type<<endl;
//     }


// };


// float main() {
//     hotel h;
//     h.display();
//     hotel h1("delux","AC");
//     h1.display();
    
//     return 0;
// }



// // function overloading

// #include <iostream>
// using namespace std;
// class e_commerce{
//     public:
//     float height;
//     float length;
//     float width;
//     float density;
//     float price;

//     void price_c(float h,float l,float w){
//         price=(h+l+w)*0.5;
//     }
//     void price_c(float h,float l,float w,float d){
//         price=(h+l+w)*d;

//     }
//     void display(){
//         cout<<"the delivery charges for the parcel is : $"<<price<<endl;
//     }
// };

// int main() {
//     e_commerce e1,e2;
//     e1.price_c(6.9,5.6,4.5);
//     e1.display();
//     e2.price_c(0.6,2.3,5.4,7.5);
//     e2.display();

//     return 0;
// }


// // USD TO INR implicit and explicit
// #include <iostream>
// using namespace std;

// int main() {
    
//     int usd;
   
//     float one_inr=85.4;
//     cout<<"Enter the amount of Usd you want to convert to inr  : ";
//     cin>>usd;

//     float inr_c= usd*one_inr;
//     int rounded_inr=static_cast<int>(inr_c+0.5);
//     cout<<rounded_inr;

//     return 0;
// }



// // Bank account

// #include <iostream>
// using namespace std;
// class bank{
//     public: 
//     float balance;

//     bank(float b){
//         balance=b;
//     }
//     void transfermoney(bank &reciever,int amount){
//         if(amount>balance){
//             cout<<"Insufficient balance!!"<<endl;
//         }
//         else{
//             balance-=amount;
//             reciever.balance+=amount;
//             cout<<endl<<"Transfer successful! Transferred ₹" << amount << endl;
//         }
//     }
//     void display(){
//         cout<<"Current balance: "<<balance<<endl;
//     }
// };

// int main() {
//     bank b(5000);
//     bank b1(6000);
//     cout<<"balance before transferring !!"<<endl;
//     b.display();
//     b1.display();

    

//     b.transfermoney(b1,7000);
//     cout<<endl<<"Balance after transferring"<<endl;
//     b.display();
//     b1.display();


    
//     return 0;
// }


// // Railway booking

// #include <iostream>
// using namespace std;

// class RailwayBooking {
// private:
//     int availableSeats;

// public:
//     RailwayBooking(int seats) {
//         availableSeats = seats;
//     }

//     // Check availability and proceed if seats are available
//     void bookTicket(int seatsRequired) {
//         if (seatsRequired <= availableSeats) { // Direct condition check without returning bool
//             availableSeats -= seatsRequired;
//             cout << "Booking successful! " << seatsRequired << " seats booked." << endl;
//         } else {
//             cout << "Sorry, not enough seats available!" << endl;
//         }
//     }

//     void displaySeats() {
//         cout << "Available Seats: " << availableSeats << endl;
//     }
// };

// int main() {
//     RailwayBooking train(10);

//     train.displaySeats();

//     train.bookTicket(5); // Book 5 seats
//     train.displaySeats();

//     train.bookTicket(6); // Attempt to book 6 seats (should fail)
//     train.displaySeats();

//     return 0;
// }




// // File handling
// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// int main() {
//     int choice;
//     string feedback;

//     cout << "Customer Feedback System" << endl;
//     cout << "1. Enter Feedback\n2. View All Feedback\nEnter your choice: ";
//     cin >> choice;

//     if (choice == 1) {
//         cin.get(); // This handles the leftover newline character from cin

//         ofstream file("feedback.txt", ios::app);
//         if (!file) {
//             cout << "Error opening file!" << endl;
//             return 1;
//         }

//         cout << "Enter your feedback: ";
//         getline(cin, feedback);
//         file << feedback << endl;
//         file.close();

//         cout << "Feedback saved successfully!" << endl;
//     } 
//     else if (choice == 2) {
//         ifstream file("feedback.txt");
//         if (!file) {
//             cout << "No feedback found!" << endl;
//             return 1;
//         }

//         cout << "\nAll Feedback:\n";
//         while (getline(file, feedback)) {
//             cout << "- " << feedback << endl;
//         }
//         file.close();
//     } 
//     else {
//         cout << "Invalid choice!" << endl;
//     }

//     return 0;
// }

// // COPY CONSTRUCTOR
// #include <iostream>
// using namespace std;

// class Car {
// public:
//     string model;
//     int price;

//     // Default constructor
//     Car(string m, int p) {
//         model = m;
//         price = p;
//     }

//     // Copy constructor
//     Car(const Car &oldCar) {
//         model = oldCar.model;
//         price = oldCar.price;
//         cout << "Copy Constructor Called!" << endl;
//     }

//     void display() {
//         cout << "Model: " << model << ", Price: ₹" << price << endl;
//     }
// };

// int main() {
//     Car car1("Toyota", 2000000);  // Original object
//     Car car2 = car1;              // Copy constructor is invoked

//     car1.display();
//     car2.display();  // car2 is a copy of car1

//     return 0;
// }



// // Friend function

// #include <iostream>
// using namespace std;

// class Car {
// private:
//     string brand;
//     int price;

// public:
//     Car(string b, int p) {
//         brand = b;
//         price = p;
//     }

//     // Declare friend function
//     friend void showCarDetails(Car c);
// };

// // Friend function definition
// void showCarDetails(Car c) {
//     cout << "Car Brand: " << c.brand << ", Price: ₹" << c.price << endl;  // Accessing private members
// }

// int main() {
//     Car myCar("Toyota", 2000000); // Creating an object
//     showCarDetails(myCar); // Calling the friend function

//     return 0;
// }