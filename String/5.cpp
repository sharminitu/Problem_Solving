#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a;
    double b;
    string s;
    cin>>a>>b;
    cin>>s;

    cout<<a+b<<endl;
    cout<<fixed<<setprecision(1)<<b+b<<endl;
    cout << s << " is the best place to learn and practice coding!"<<endl;

    return 0;
}