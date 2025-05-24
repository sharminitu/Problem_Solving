#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b[100];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    for(int i=0;i<a-1;i++){
        int c = b[i]*b[i+1];
        cout<<c<<" ";
    }
    cout<<endl;

    return 0;
}