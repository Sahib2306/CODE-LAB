#include<iostream>
using namespace std;
int main(){
    // for(int i=0;i<=5;i++){
    //     cout<<string(i,'*')<<endl;
    // }
    // int n;
    // cout<<"enter a number: ";
    // cin>>n;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         cout << j << " ";
    //     }
    //     cout << endl;}
    // char n;
    // cin>>n;
   


    // for (int i = 1; i <= 5; i++) {
    //     for(int k=0;k<5-i;k++){
    //         cout<<' ';

    //     }

    //     for (int j = 1; j <= i; j++) {
    //         cout<< n <<' ';
    //     }
    //     cout << endl;
    // }
    int n;
    cout << "Enter the number : ";
    cin >> n;

    
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = n-1; i <= 1; i--) {
        
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
  }

