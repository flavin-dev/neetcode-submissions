class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.empty()) return false;
        unordered_set<int>un;
        un.insert(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(un.find(nums[i])!=un.end()) return true;
            un.insert(nums[i]);
        }
        return false;
    }
};