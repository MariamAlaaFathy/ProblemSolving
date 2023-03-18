#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int ans = 0, l;
    cin >> s;
    sort(s.begin(),s.end());
    
    l = s.length();
    
    for(int i=1; i<l; i++)
    {
        if(s[i] != s[i-1])
            ans++;
    }
    
    if(ans % 2 == 0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}
