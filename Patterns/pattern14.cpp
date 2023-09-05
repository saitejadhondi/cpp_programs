/* Input Format: N = 6
Result:   
A B C D E F
A B C D E 
A B C D
A B C
A B
A
*/
#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    char ch='A';
    int i,j,a=1;
    for(i=1;i<=n;i++)
    {
        ch='A';
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