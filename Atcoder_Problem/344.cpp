#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int c=0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='|'){
           c++;
        }
        else if(c!=1){
            cout<<s[i];
        }
    }
    cout<<endl;

    return 0;
}

