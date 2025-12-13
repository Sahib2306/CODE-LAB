// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     for(int i=0;i<5;i++){
//         if(arr[i]==2){
//             cout<<arr[i];
//         }
//     }
//     int a = 99999999999999999;
//     cout<<a*a<<endl;
//     int b= 2;
//     cout<<b++*b++*b--;
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    // for(int i =4; i>=0;i--){
    //     cout<<arr[i];
    // }
    int a[] = {};
    for(int i =4;i>=0;i++){
        int dig = arr[i]%10;
        a[0]=+dig;

    }
    cout<<a[0];
    
    return 0;
}