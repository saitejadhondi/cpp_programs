/* Input Format: N = 6
Result:     
***********
 *********
  *******
   ***** 
    ***    
     *
*/
#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    int i,j,k,l;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>i;j--)
        {
            cout<<" ";
        }
        for(k=1;k<=2*i-1;k++)
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