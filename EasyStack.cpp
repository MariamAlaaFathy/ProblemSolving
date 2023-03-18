#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;

	scanf("%d", &t);

	stack<int> s;
  	
	while(t--){
		int x;
		scanf("%d", &x);
		if(x == 1) {
			scanf("%d", &x);
			s.push(x);
	    }
	    else if(x == 2) {
	        if(!s.empty())
	            s.pop();
	    } else {
	        if(!s.empty()) printf("%d\n", s.top());
	        else printf("Empty!\n");
		}
	}
  return 0;
}
