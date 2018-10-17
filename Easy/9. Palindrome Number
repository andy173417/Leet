class Solution {
public:
    bool isPalindrome(int x) {
        int n=0,a,x1;
        x1=x;
        if(x<0)return 0;
        while(x!=0){
            a=x%10;
            x/=10;
            n*=10;
            n+=a;
        }
        if(n>INT_MAX||n<INT_MIN)
            return 0;
        if(n==x1)
            return 1;
        else
            return 0;
    }
};
