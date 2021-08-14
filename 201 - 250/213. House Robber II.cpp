class Solution {
public:
    int rob(vector<int>& nums) 
    {
        if(nums.size() == 1) return nums[0];
        if(nums.size() == 2) return max(nums[0], nums[1]);
        if(nums.size() == 3) return max(max(nums[0], nums[1]), nums[2]);
        
        int dpx[nums.size()-1];
        dpx[0] = nums[0];
        dpx[1] = nums[1];
        dpx[2] = nums[0] + nums[2];
        
        for(int i=3; i<(int)nums.size()-1; i++)
            dpx[i] = nums[i] + max(dpx[i-2], dpx[i-3]);
        
        int dpy[nums.size()-1];
        dpy[0] = nums[1];
        dpy[1] = nums[2];
        dpy[2] = nums[1] + nums[3];
        
        for(int i=3; i<(int)nums.size()-1; i++)
            dpy[i] = nums[i+1] + max(dpy[i-2], dpy[i-3]);
        
        return max(max(dpx[nums.size()-2], dpx[nums.size()-3]),
                   max(dpy[nums.size()-2], dpy[nums.size()-3]));
    }
};
