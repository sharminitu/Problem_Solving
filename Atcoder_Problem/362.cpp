#include<iostream>
using namespace std;
int main(){
    int r,b,g;
    cin>>r>>g>>b;

    string s;
    cin>>s;

    if(s=="Blue"){
        cout<<min(r,g);
    }
    else if(s=="Red"){
        cout<<min(b,g);
    }
    else{
        cout<<min(r,b);
    }

    return 0;
}