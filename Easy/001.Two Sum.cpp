// unordered_map<int, int> m;
// map<int, int> m;
//vector

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        unordered_map<int, int> m;
        vector<int> result;
        for (int i = 0;i < numbers.size();i++) {
            int remain = target - numbers[i];
            if (m.count(remain) > 0) {
                result.push_back(m[remain]);
                result.push_back(i);
                return result;
            }
            m[numbers[i]] = i;
        }
        return result;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> res;
        for (int i = 0; i < nums.size(); ++i) {
            m[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); ++i) {
            int t = target - nums[i];
            if (m.count(t) && m[t] != i) {
                res.push_back(i);
                res.push_back(m[t]);
                break;
            }
        }
        return res;
    }
};
