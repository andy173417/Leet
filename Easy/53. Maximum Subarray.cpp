class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i,j=0,sum=0,max=0;
        int check=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]<0){
                check++;
            }
        }
        if(check==nums.size()){
            sort(nums.begin(),nums.end());
            max=nums[0];
        }
        for(i=0;i<nums.size();i++){
            sum+=nums[i];
            if(max<sum)
                max=sum;
            if(sum<0){
                sum=0;
            }
        }
        return max;
    }
};
