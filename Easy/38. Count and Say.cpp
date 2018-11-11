class Solution {
public:
    string countAndSay(int n) {
        string s[50];
        s[1]="1";
        for(int i=2;i<=n;i++){
            char check=s[i-1][0];
            int count=1;
            //s[i-1]+='#'; //加這行下面for裡面就不用=，只要j<s[i-1].size()就好                    
            for(int j=1;j<=s[i-1].size();j++){ 
                if(s[i-1][j]==check){
                    count++;
                }                                           
                else{
                    s[i]=s[i]+(char)(count+48)+check;
                    //s[i]=s[i]+to_string(count)+check;
                    check=s[i-1][j];
                    count=1;
                }
            }
        }
        return s[n];
    }
};
