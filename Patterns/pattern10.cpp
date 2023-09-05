/* Input Format: N = 6
Result:   
     *
     **
     *** 
     ****
     *****
     ******  
     *****
     ****
     ***    
     **
     *
*/
#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++)
    {
        for(k=i;k<n;k++)
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