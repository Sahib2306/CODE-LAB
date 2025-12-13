#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<" enter a character: ";
    cin>> ch;
    ch = tolower(ch);
    if(ch == 'a' || ch == 'e'|| ch =='i' || ch == 'o'|| ch =='u'){
        cout<<"character is vowel  i.e.: "<<ch;

    }
    else{
        cout<<"character is a consonant  i.e.: "<<ch;
    }
    return 0;
}