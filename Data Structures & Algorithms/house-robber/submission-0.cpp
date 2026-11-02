class Solution {
public:
    int rob(vector<int>& nums) {
        int max1=0,max2=0;
        for(int i=0;i<nums.size();i++){
            int temp=max(nums[i]+max1,max2);
            max1=max2;
            max2=temp;
        }
        return max2;
    }
};