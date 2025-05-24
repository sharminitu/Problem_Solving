// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int len = s.length();
//     if(len<3||len>100){
//         cout<<"No"<<endl;
//         return 0;
//     }
//     if (s[0] == '<'&& s[len - 1] == '>'){
//         for (int i = 0; i < len-1; i++)
//         {
//             if(s[i]!='='){
//             cout<<"No"<<endl;
//             return 0;
//             }
//         }
//         cout<<"Yes"<<endl;
//     }
//     else{
//         cout<<"No"<<endl;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();

    if (len < 3 || len > 100)
    {
        cout << "No" << endl;
        return 0;
    }

    if (s[0] == '<' && s[len - 1] == '>')
    {
        for (int i = 1; i < len - 1; i++)
        {
            if (s[i] != '=')
            {
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
