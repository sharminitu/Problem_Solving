#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,s =0,i;
    int p=1;
    cin>>a;
        for(int i=0;i<=a;i++){
        s+=p;
        p*=a ;
    }
  

    cout<<s<<endl;

    return 0;
}