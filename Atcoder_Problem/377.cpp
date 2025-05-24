#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;

    if(s=="ABC"||s=="BCA"||s=="ACB"||s=="BAC"||s=="CAB"||s=="CBA"){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}