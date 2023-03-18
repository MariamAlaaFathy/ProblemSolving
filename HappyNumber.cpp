#include <bits/stdc++.h>
using namespace std;

bool isHappy(int n) {
                 
    set<int> s;
    while(s.count(n)==0)
    {
        if(n==1) return true;
        s.insert(n);
        int temp=0;
        while(n)
        {
            temp += (n%10)*(n%10);
            n/=10;
        }
        n = temp;
    }
    return false;
}
int main()
{ 
    int n=19;
    
    if(isHappy(n)) 
        cout<<"true"<<endl;
    else 
        cout<<"false"<<endl;
    
 return 0;
}
