#include<iostream>
using namespace std;
int main(){
    int n,m,c1=0;
    cin>>n>>m;
    int h;
    for(int i=1;i<=n;i++){
       cin>> h;
        m=m-h;
        if(m>=0){  
           c1++;
        }
    }
        cout<<c1<<endl;
        return 0;
}