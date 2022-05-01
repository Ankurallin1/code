#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[26]{0};
    string s;
    cout<<"Enter the string\n";
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        ++arr[int(s[i]-97)];
    }
    cout<<"Frequency of characters are:\n";
    for(int i=0;i<26;i++)
    {
        if(arr[i])
        {
            cout<<"occurence of "<<char(97+i)<<" is "<<arr[i]<<endl;
        }
        else
        {
            continue;
        }
    }
    return 0;
}