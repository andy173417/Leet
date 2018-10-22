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
