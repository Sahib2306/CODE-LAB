#include <iostream>
#include<fstream>
using namespace std;

int main() {
   string filename="student.txt";
   int choice;
   string name;
   float marks;

   cout<<"1.Enter details\n2.Enter marks\n3.Display all\nEnter your choice:"<<endl;
   cin>>choice;
   cin.get();

   if(choice==1){
    ofstream file(filename,ios::app);
    if (!file){
        cout<<"Error while opening the file!!"<<endl;
        return 1;
    }

    cout<<"Enter your detaills: "<<endl;
    getline(cin,name);
    file<<name<<endl;
    file.close();
    cout<<"Name stored successfully! "<<endl;


   }
   else if(choice==2){
    ofstream file(filename,ios::app);
    if (!file){
        cout<<"Error while opening the file!!"<<endl;
        return 1;
    }
    cout<<"Enter marks: "<<endl;
    cin>>marks;
    file<<marks<<endl;
    file.close();
    cout<<"Marks stored successfully"<<endl;
   }

   else if(choice==3){
    ifstream file(filename);
    if(!file){
        cout<<"No file found !!"<<endl;
        return 1;
    }
    cout<<"ALL details are below: "<<endl;
   while(getline(file,name)){
    cout << "- " << name <<" "<<marks<< endl;
   }
    file.close();


   }
   else{
    cout<<"wrong input";
   }
    return 0;
}