/* 
Input Format: N = 6
Result:   
******
*    *
*    *
*    *
*    *
******
*/
#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    int i,j,k,l;
    for(i=1;i<=n;i++)
    {
        if(i==1 || i==n)
        {
            for(j=1;j<=n;j++)
            {
                cout<<"*";
            }
        }
        else
        {
            cout<<"*";
            for(k=2;k<n;k++)
            {
                cout<<" ";
            }
            cout<<"*";
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