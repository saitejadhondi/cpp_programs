/* Input Format: N = 6
Result:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
*/
#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
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