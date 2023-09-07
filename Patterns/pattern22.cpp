/* 
Input Format: N = 3
Result: 
3 3 3 3 3 
3 2 2 2 3 
3 2 1 2 3 
3 2 2 2 3 
3 3 3 3 3
*/
#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    int i,j, top, bottom, left, right;
    for(i=0;i<2*n-1;i++)
    {
        for(j=0;j<2*n-1;j++)
        {
            top=i;
            left=j;
            right=(2*n-2)-j;
            bottom=(2*n-2)-i;
            cout<<(n-min(min(left,right), min(top,bottom)));
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