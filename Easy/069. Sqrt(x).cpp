class Solution {
public:
    int mySqrt(int x) {
        return sqrt(x);
    }
};




class Solution {
public:
    int mySqrt(int x) {
        if(x==1||x==0) return x;
        long long int m=0,n=x;
        long long int middle;
        while(1){
            middle=(m+n)/2;
            if(middle*middle>x){
                if((middle-1)*(middle-1)<=x)
                    return middle-1;
                else{
                    n=middle-1;
                }
            }
            else if(middle*middle==x) return middle;
            else{
                if((middle+1)*(middle+1)>x)
                    return middle;
                else{
                    m=middle+1;
                }
            }
        }
    }
};
