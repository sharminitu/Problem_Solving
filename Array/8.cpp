#include <iostream>
using namespace std;
int main()
{
    int a[5], i,b,t=0;
    cin>>b;
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]!=b){
            a[t++]=a[i];
        }
    }

    for (int i = 0; i < t; i++)
    {
        cout << a[i] << " ";
    }
}
