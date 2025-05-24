#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    char a,b;
    cin>>a>>b;

    string s;
    cin>>s;
    for(int i=0;i<n;i++){
    if(s[i]!=a){
        s[i]=b;
      }
    }
    cout << s << endl;

    return 0;

    
}