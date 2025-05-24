#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c=0,a=0;
    for(int i=0;i<s.length();i++){
        if(s.at(0)!=s.at(i))
        {
            a=i+1;
            c++;
        }
    }
    if(c>1){
        cout<<a<<endl;
    }
    else{
        cout<<"1"<<endl;
    }
}