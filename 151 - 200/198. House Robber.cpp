class Solution {
public:
    int rob(vector<int>& nums) 
    {
        if(nums.size() == 1) return nums[0];
        if(nums.size() == 2) return max(nums[0], nums[1]);
        if(nums.size() == 3) return max(nums[0] + nums[2], nums[1]);
        
        // size > 3
        int dp[nums.size()];
        
        // initial dp
        dp[0] = nums[0];
        dp[1] = nums[1];
        dp[2] = nums[2] + dp[0];
        
        // 4th element (3rd index) onwards
        for(int i=3; i<(int)nums.size(); i++)
            dp[i] = nums[i] + max(dp[i-2], dp[i-3]);
        
        return max(dp[nums.size()-1], dp[nums.size()-2]);  
    }
};
