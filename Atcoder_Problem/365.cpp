#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    if(t%4!=0){
        cout<<"365"<<endl;
    }
    else if(t%4==0&&t%100!=0){
        cout<<"366";
    }
    else if(t%100==0&&t%400!=0){
        cout<<"365"<<endl;
    }
    else if(t%400==0){
        cout<<"366";
    }

    return 0;
}