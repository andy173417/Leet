class Solution {
public:
    string addBinary(string a, string b) {
        if(a=="0") return b;
        if(b=="0") return a;
        if(a.size()<b.size()){
            string temp;
            temp=a;
            a=b;
            b=temp;
        }
        while(b.size()<a.size()){ 
            b='0'+b;
        }
        string c;
        int carry=0;
        for(int i=a.size()-1;i>=0;i--){
            if(a[i]=='1'){
                if(b[i]=='1' && carry==1){
                    carry=1;
                    c='1'+c;
                }
                else if(b[i]=='1' && carry==0){
                    carry=1;
                    c='0'+c;
                }
                else if(b[i]=='0' && carry==1){
                    carry=1;
                    c='0'+c;
                }
                else{
                    carry=0;
                    c='1'+c;
                }
            }
            else{
                if(b[i]=='1' && carry==1){
                    carry=1;
                    c='0'+c;
                }
                else if(b[i]=='1' && carry==0){
                    carry=0;
                    c='1'+c;
                }
                else if(b[i]=='0' && carry==1){
                    carry=0;
                    c='1'+c;
                }
                else{
                    carry=0;
                    c='0'+c;
                }
            }
        }
        if(carry) c='1'+c;
        return c;
    }
};
