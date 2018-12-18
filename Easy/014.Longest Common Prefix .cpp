class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s;
        int check=1;
        if(strs.size()==0)
            return s;
        for(int i=0;i<strs[0].size();i++){
            for(int j=1;j<strs.size();j++){
                if(strs[0][i]==strs[j][i]){
                    check++;
                }
            }
            if(check==strs.size()){
                check=1;
                s+=strs[0][i];
            }
            else
                break;
        }
        return s;
    }
};
