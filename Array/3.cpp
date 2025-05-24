#include<iostream>
using namespace std;
int main(){
    int f;
    cin>>f;
    int a[5];
    for(int i =0;i<sizeof(a)/sizeof(a[0]);i++){
        cin>>a[i];
    }
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        if(a[i]==f){
            f==a[i];
            cout<<f<<endl;
            cout<<i<<endl;
        }
    }
}