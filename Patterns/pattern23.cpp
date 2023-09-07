/* 
Input Format: N = 4
Result: 
1             1
1 2         2 1
1 2 3     3 2 1
1 2 3 4 4 3 2 1 
*/
#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    int i, j, k,a,b;
    for(i=n;i>=1;i--)
    {
        a=1;
        for(j=n;j>=i;j--)
        {
            cout<<a;
            a++;
        }
        for(k=1;k<=2*i-2;k++)
        {
            cout<<" ";
        }
        b=a-1;
        for(j=n;j>=i;j--)
        {
            cout<<b;
            b--;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    pattern(n);
    return 0;
}