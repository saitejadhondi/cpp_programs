/* Input Format: N = 6
Result:
* * * * * *
* * * * * 
* * * * 
* * * 
* * 
* 
*/
#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            cout<<"*"<<" ";
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