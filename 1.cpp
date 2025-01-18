#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int c = a/b;
    if(a%b==0){
        cout<<c<<endl;
    }
    else{
        cout << "Impossible"<<endl;
    }

    return 0;
}