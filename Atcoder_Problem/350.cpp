#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    string s1 = "ABC";
    cin>>s;

    if(s>="ABC001"&&s<="ABC349"&&s!="ABC316"){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}