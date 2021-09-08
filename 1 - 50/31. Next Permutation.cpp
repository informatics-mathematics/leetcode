class Solution 
{
public:
    void nextPermutation(vector<int>& nums) 
    {
        int p = -1;
        int val = 1000, q = -1;
        
        for(int i = (int)nums.size()-1; i > 0; i--)
        {
            if(nums[i] > nums[i-1])
            {
                p = i - 1; break;
            }       
        }
        
        // lexicographically largest
        if(p == -1) sort(nums.begin(), nums.end());
        
        else
        {
            for(int i = p + 1; i < (int)nums.size(); i++)
            {
                if(nums[i] > nums[p])
                {
                    if(nums[i] < val)
                    {
                        val = nums[i];
                        q = i; 
                    }
                }
            }

            // swap the two numbers
            int t = nums[p];
            nums[p] = nums[q];
            nums[q] = t;

            // sort from p + 1 to nums.size()
            sort(nums.begin() + p + 1, nums.end());
        }
        
        // for(int i:nums) cout << i; 
    }
};
