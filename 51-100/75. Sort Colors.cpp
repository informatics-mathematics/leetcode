class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
    	int red = 0, white = 0, blue = 0;

    	for(int i=0; i<(int)nums.size(); i++)
    	{
    		if(nums[i] == 0) red += 1;
    		else if(nums[i] == 1) white += 1;
    		else blue += 1;
    	}

    	for(int i = 0; i<(int)nums.size(); i++)
    	{
    		if(i < red) nums[i] = 0;
    		else if(i < red + white) nums[i] = 1;
    		else nums[i] = 2;
    	}
        
    }
};
