/* Input Format: N = 3
Result: 
*    *
**  **
******
**  **
*    *

*/
#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    int i,j,k,l;
for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            cout<<"*";
        }
        for(k=0;k<2*i-2;k++)
        {
            cout<<" ";
        }
        for(j=n;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            cout<<"*";
        }
        for(k=0;k<2*i;k++)
        {
            cout<<" ";
        }
        for(l=i;l<n;l++)
        {
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