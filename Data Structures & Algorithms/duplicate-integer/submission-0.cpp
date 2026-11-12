class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool out = false;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i - 1; j >= 0; j--) {
                if (nums[i] == nums[j]) {
                    out = true;
                    break;
                }
            }
        }
        return out;
    }
};