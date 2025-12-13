#include<iostream>
using namespace std;
int main(){
    int door;
    cout<<"Enter the number of doors: ";
    cin>>door;
    if(door == 2){
        cout<<"YOU ESCAPED!"<<endl;

    }
    else if(door == 3){
        cout<<"YOU FELL INTO THE TRAP"<<endl;

    }
    else{
        cout<<"THE MONSTER CAUGHT YOU!"<<endl;
    }
    for(int i=0; i<=10; i++){
        int move ;
        int step=0;
        cout<<"DO YOU WANT TO MOVE A STEP AHEAD [1=YES/0=NO/2= FOR 2 STEPS]?"<<endl;
        cin>>move;
        for(int j=0; j<=10; j++){
        if(move == 1){
            step++;
            cout<<"step count = "<<step<<endl;
            while(step == 7){
                cout<<"YOU FELL!"<<endl;
                break;
            }
        }
        else 
        cout<<"you escaped"<<endl;
    }
    }
    return 0;

}