#include<iostream>
using namespace std;
int main(){
    int n,a,b,c,a1,b1,c1;
    cin>>n;
     a=n/100;
     a1=n%100;
     b=a1/10;
     c=a1%10;

     int s = 100*b+10*c+a;
     int r = 100*c+a*10+b;

    
    cout<<s<< " "<<r<<endl;

    return 0;
}