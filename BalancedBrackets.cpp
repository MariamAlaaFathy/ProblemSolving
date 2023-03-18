#include <bits/stdc++.h>
using namespace std;

string isBalanced(string s) {
    std::vector<char> stack;
    bool flag = false;
    for(int i = 0; (i < s.length()) && !flag; i++){
        
        switch(s[i]){
            case '{':
                stack.push_back(s[i]);
                break;
            case '[':
                stack.push_back(s[i]);
                break;
            case '(':
                stack.push_back(s[i]);
                break;
                
            case '}':
                if(stack.size() == 0){
                    flag=true;
                }
                else if('{' != stack.back()){
                    flag=true;
                }
                else{
                    stack.pop_back();
                }
                break;
                
             case ']':
                if(stack.size() == 0){
                    flag=true;
                }
                else if('[' != stack.back()){
                    flag=true;
                }
                else{
                    stack.pop_back();
                }
                break;
                
              case ')':
                if(stack.size() == 0){
                    flag=true;
                }
                else if('(' != stack.back()){
                    flag=true;
                }
                else{
                    stack.pop_back();
                }
                break; 
        }
    }
    return (flag || (stack.size() != 0)) ? "NO" : "YES";
}

int main() {
    int t;
    cin >> t;
    for(int a = 0; a < t; a++){
        string s;
        cin >> s;
        string result = isBalanced(s);
        cout << result << endl;
    }
    return 0;
}
