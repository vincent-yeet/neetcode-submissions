class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> uniques;
        for (int i = 0; i < nums.size(); i++) {
            auto inserted = uniques.insert(nums[i]);
            if (inserted.second == false) return true;
        }
        return false;
    }
};