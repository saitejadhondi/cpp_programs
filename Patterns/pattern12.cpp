/* Input Format: N = 6
Result:   
1
01
101
0101
10101
010101
*/
#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    int i,j,a=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
         cout<<a;
         a=1-a;
         /*   if(j%2==0)
            {
                cout<<a;
                a=1;
            }
            else
            {
                cout<<a;
                a=0;
            } */
        }
        cout<<endl;
        if(i%2==0)
        {
            a=1;
        }
        else
        {
            a=0;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    pattern(n);
    return 0;
}