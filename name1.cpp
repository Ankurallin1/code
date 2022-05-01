#include <bits/stdc++.h>
using namespace std;
# define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int count[26]{0};
        string a,b;
        cin>>a>>b;
        a=a+b;
        for(int i=0;i<a.length();i++)
        {
            count[a[i]-97]++;
        }
        int flag=1,n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            string child;
            cin>>child;
            for(int j=0;j<child.length();j++)
            {
                if(count[child[j]-97]>0)
                count[child[j]-97]--;
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag)
        cout<<"Yes\n";
        else
        cout<<"No\n";


    }
    return 0;
}