class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0,last=s.size();
        while(s[last-1]==' ') last--;
        for(int i=0;i<last;i++){
            if(s[i]!=' '){
                count++;
            }
            else{
                count=0;
            }
        }
        return count;
    }
};



class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0,last=s.size();
        if (s.length() == 0) {
            return 0;
        }
        while(s[last-1]==' ') last--;
        for(int i=last-1;i>=0;i--){
            if(s[i]!=' '){
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};



class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0, tail = s.length() - 1;
        while (tail >= 0 && s[tail] == ' ') tail--;
        while (tail >= 0 && s[tail] != ' ') {
            len++;
            tail--;
        }
        return len;
    }
};
