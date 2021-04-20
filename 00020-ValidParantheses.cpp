class Solution {
public:
    bool isValid(string s) {
        stack<int> check;
        check.push(s[0]);
        for(int i=1;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                check.push(s[i]);
            }
            else if(s[i]==')'||s[i]=='}'||s[i]==']'){
                if(check.empty()){
                    check.push(s[i]);
                }
                else{
                if(check.top()=='('&&s[i]==')'){
                    check.pop();
                }
                else if(check.top()=='{'&&s[i]=='}'){
                    check.pop();
                }
                else if(check.top()=='['&&s[i]==']'){
                    check.pop();
                }
                else{
                    check.push(s[i]);
                }
                }
            }
            
        }
        return check.empty();
    }
};
