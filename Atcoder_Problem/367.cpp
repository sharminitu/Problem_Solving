#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;


    if(b>c){
        if(b>a&&a>c){
            cout << "Yes" << endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
       
    else{
        if(b<a&&c>a){
            cout<<"No"<<endl;
        }
        else{
        cout<<"Yes"<<endl;
        }
    }

    return 0;
}