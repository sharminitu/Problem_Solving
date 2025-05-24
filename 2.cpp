#include <iostream>
using namespace std;
int main()
{
    int a,t=0;
    cin>>a;
    for(int i=0;i<a;i++){
        int s,r=0;
        for(int i=0;i<6;i++){

            cin>>s;
            r+=s; 
        }
        cout << r << endl;
        t+=r;
    }
    cout << "The Total Run is:" << t << endl;
    return 0;

}