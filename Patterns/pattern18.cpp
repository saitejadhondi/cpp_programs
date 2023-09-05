/* Input Format: N = 6
Result:   
F
E F
D E F
C D E F
B C D E F
A B C D E F
*/
#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    int i,j;
    char ch=64;
    for(i=n;i>=1;i--)
    {
        ch=64;
        ch+=i;
        for(j=n;j>=i;j--)
        {
            cout<<ch<<" ";
            ch+=1;
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