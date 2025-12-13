#include<iostream>
using namespace std;
int main(){
    cout<<"============================"<<endl;
    cout<<"CASTLE DEFENSE"<<endl;
    cout<<"============================"<<endl;
    cout<<"WARNING !!! THE CASTLE IS UNDER ATTACK!\n"<<endl;
    cout<<"INSTRUCTIONS\n1.CASTLE HAS 100% DURABILITY\n2.10%  DURABILITY IS LOST PER ATTACK"<<endl;
    cout<<"============================"<<endl;
    cout<<"ALL THE BEST"<<endl;
    cout<<"============================"<<endl;
    
    int defense=100;
    while(defense!=0){
        cout<<"CASTLE UNDER ATTACK!!"<<endl;
        defense-=10;
        cout<<"THE DURABILITY OF GATE IS: "<<defense<<"%"<<endl;
        
        if(defense==0){
            cout<<"THE GATE IS BROKEN ! THE CASTLE FALLS!"<<endl;

        }
        else{
            cout<<"THE CASTLE IS SAFE!!"<<endl;
        }
        
    }
    for(int i =0;i<=20;i++){
        int choice;
        cout<<"DO YOU WANT TO PROTECT THE CASTLE?[1=YES(BY:5%)/0=NO]";
        cin>>choice;
        if(choice==1){
            defense+=5;
            cout<<"THE DURABLITY IS :"<<defense<<"%"<<endl;
            if(defense>=100){
                cout<<"DURABILITY 100%"<<endl;
                break;
            }
        }
        else{
            cout<<"WRONG INPUT!! YOU LOSE!!"<<endl;
            break;
        }
      
    }
    if(defense==100){
        cout<<"THE GATE IS FULLY REPARIED!! CONGRATULATIONS YOU WIN!!"<<endl;

    }
    else{
        cout<<"THE CASTLE IS STILL UNDER THREAT!!"<<endl;
    }
    return 0;

}