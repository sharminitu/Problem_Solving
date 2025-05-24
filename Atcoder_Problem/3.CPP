#include<bits/stdc++.h>.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int t = a*60+b;

    int m = c*60+d;


    if(m<=t){
        cout<<"Yes"<<endl;

    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}