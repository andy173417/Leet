class Solution {
public:
    int reverse(int x) {
        int n=0;
        int i=0,a;
        bool check=0;
        if(x<0){
            x=-x;
            check=1;
        }
        while(x!=0){
            a=x%10;
            x/=10;
            n*=10;
            n+=a;
        }
        if(check)n=-n;
        if(n<INT_MIN||n>INT_MAX)
            return 0;
        else
            return n;
    }
};
