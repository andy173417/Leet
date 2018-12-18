class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0)
            return 0;
        else if(haystack.find(needle)==string::npos)
            return -1;
        else
            return haystack.find(needle);
    }
};
