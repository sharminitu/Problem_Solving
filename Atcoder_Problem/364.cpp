#include<iostream>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        if (s == "sweet"){
            c++;
        } 
        else{
            c=0;
        }
    }
    if (c >= 2)
    {
        cout << "No" << endl;
    }
        cout << "yes" << endl;
    

    return 0;
}