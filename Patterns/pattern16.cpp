/* Input Format: N = 6
Result:   
     A     
    ABA    
   ABCBA   
  ABCDCBA  
 ABCDEDCBA 
ABCDEFEDCBA
*/
#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    char ch;
    int i,j,k,l;
    for(i=1;i<=n;i++)
    {
        ch='A';
        for(j=i;j<n;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<ch;
            ch+=1;
        }
        ch-=1;
        for(l=1;l<i;l++)
        {
            ch-=1;
            cout<<ch;
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