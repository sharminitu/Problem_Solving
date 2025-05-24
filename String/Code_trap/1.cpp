#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,r1,r,s=0,cn=0,c;
    int p;
    cin>>a>>b;
   
    for (int i = a; i <= b; i++)
    {
        for (int i = 2; i <= p/ 2;i++){
            if(p%i==0){


                c=p;

                while(c!=0){

                r1 = c%10;
                s = 10 * s + r1;
                r = c/10;
            }

                if(c==s){
                    cn++;
                }

            }
        }
    }

    cout<<cn<<endl;
    

    return 0;
}