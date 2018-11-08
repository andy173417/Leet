class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        while(nums[i]<target && i<nums.size()){
            i++;
        }
        return i;
    }
};
