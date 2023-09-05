/* Input Format: N = 6
Result:   
1
2  3
4  5  6
7  8  9  10
11  12  13  14  15
16  17  18  19  20  21
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
            cout<<a<<" ";
            a+=1;
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