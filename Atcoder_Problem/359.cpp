#include<iostream>
using namespace std;
int main(){
    int a,c=0;
    cin>>a;
    while(a--){
        string s;
        cin>>s;

        if (s == "Takahashi"){
            c++;
        }
   
    }
    cout << c << endl;

    return 0;
}