#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x,c;
    int d;
    cin>>x>>d;

     c = d-17;

    float r = ((360-(c+d))/3)*2.0;

   

    cout<<fixed<<setprecision(2)<<r<<" Degree"<<endl;

    return 0;


}