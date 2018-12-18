class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1]++;
        for(int i=digits.size()-2;i>=0;i--){
            if(digits[i+1]==10){
                digits[i+1]=0;
                digits[i]++;
            }
            else
                break;

            }
        if(digits[0]==10){
            digits[0]=1;
            digits.push_back(0);//digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
