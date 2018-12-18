//
class Solution {
public:
    bool isValid(string s) {
        string k;
        int check=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                k+=s[i];
            }
            else if(s[i]==')'&&k[k.size()-1]=='(')
                k=k.substr(0,k.size()-1);
            else if(s[i]==']'&&k[k.size()-1]=='[')
                k=k.substr(0,k.size()-1);
            else if(s[i]=='}'&&k[k.size()-1]=='{')
                k=k.substr(0,k.size()-1);
            else
                check=1;
        }
        if(check||k.size()>0)
            return 0;
        else
            return 1;
    }
};

//stack
class Solution {
public:
    bool isValid(string s) {
        stack<char> k;
        if(s.empty())
            return 1;
        for(int i=0;i<s.size();i++){
            char c = s[i];
            if( c=='(' || c=='[' || c=='{' )
                k.push(s[i]);
            else{
                if(k.empty()) return 0;
                char top = k.top();
                if((c ==')' && top == '(') || (c ==']' && top == '[') || (c =='}' && top == '{'))
                    k.pop();
                else
                    return 0;
            }
        }
        return k.empty();
    }
};
