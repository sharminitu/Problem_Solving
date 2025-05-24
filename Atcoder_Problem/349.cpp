#include<iostream>
using namespace std;
int main(){
    int a,s=0,c=0;
    cin>>a;
    int b[a-1];
    for(int i=0;i<a-1;i++){
        cin>>b[i];
    }
    for(int i=0;i<a-1;i++){
        s=s+b[i];
        
    }
     c = c - s;
    cout<<c<<endl;

    return 0;
}