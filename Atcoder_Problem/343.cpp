#include<iostream>
using namespace std;
int main(){
    int a,b,t,i;
    cin>>a>>b;

    int c=a+b;
    if(c<=9){

    for(int i=0;i<=9;i++){
        if(i==c){
            continue;
        }
        if(i!=c){
        cout << i << endl;
        break;
        }
    }
    }
    return 0;
}