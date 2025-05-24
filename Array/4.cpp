#include <iostream>
using namespace std;
int found(int arr[5],int size,int fo){
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] == fo)
        {
           return i;
        }

    }
    return -1;
}
 int main()
{
    int f,i;
    cin >> f;
    int a[5];
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
      cin >> a[i];
        }
    int index = found(a,sizeof(a)/sizeof(a[0]),f);
    cout << index << endl;
        
}