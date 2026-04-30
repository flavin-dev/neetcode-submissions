class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>un;
        for(int x:nums){
            if(un.find(x)!=un.end()){
                return true;
            }
            un.insert(x);
        }
        return false;
    }
};