#include <bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(int nums[], int k, int n) {
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n && j<=i+k;j++) {
            if(nums[j]==nums[i]) {
                return true;
			}
        }
	}
    return false;
}

int main() 
{
    int nums[]={1,2,3,1};
    int k=3;
    if(containsNearbyDuplicate(nums, k, 4))
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
   return 0; 
}
