#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int len,len1;
    len =a.length();
    len1=b.length();
    string c=a+b;

    swap(a[0],b[0]);

    cout<< len<<" "<<len1<<endl;
    cout<<c<<endl;
    cout<<a<<" "<<b<<endl;

    return 0;
    
}