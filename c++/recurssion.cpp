#include<iostream>
using namespace std;
int rev=0;
void recurssion(int n){
    if(n==0){
        return;
    }
    
    int dig=n%10;
    rev=rev*10+dig;

    recurssion(n/10);
      
    


}

int main(){
    recurssion(1234);
   
    cout<<rev<<endl;

   recurssion(54321);

   cout<<rev;
      
    return 0;

}