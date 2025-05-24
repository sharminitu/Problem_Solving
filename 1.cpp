// #include<iostream>
// using namespace std;
// int main(){
//     string a;
//     cin>>a;
//     int i=0,m=0,c=0;
    
//     while(a[i]!='\0'){
//         if(a[i]=='a'||a[i]=='e'||a[i]=='o'||a[i]=='i'||a[i]=='u'){
//             c++;
//             if (c > m)
//             {
//                 m = c;
//             }
//         }
//         else{
//             c=0;
//         }
//         i++;

//     }
//     cout << m << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int ans;
map<int, int> a;
int main()
{
    int x;
    while (scanf("%d", &x) != EOF)
    {
        a[x]++;
    }
    for (int i = 1; i <= 4; i++)
        ans += a[i] / 2;
    cout << ans;
    return 0;
}