#include<iostream>
using namespace std;
int main(){
    string a;
    int i;
    getline(cin,a); 
    for(int i=0;i<a.length();i++){//for(char c:a)

    if(a[i]=='\\'){
        break;
    }
    cout << a[i];
    }
    return 0;

}