/* Input Format: N = 6
Result:   
A 
B B
C C C
D D D D
E E E E E
F F F F F F
*/
#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    char ch='A';
    int i,j,a=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
        ch+=1;
    }
    
}
int main()
{
    int n;
    cin>>n;
    pattern(n);
    return 0;
}