#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(a==b&&b==c||a==c&&a==d||b==c&&c==d||a==d){
        cout<<"Yes"<<endl;
    }
    else if(a==b&&b==c&&c==d&&d==a){
        cout<<"No";
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}