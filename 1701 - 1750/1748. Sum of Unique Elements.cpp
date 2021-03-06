class Solution {
public:
    int sumOfUnique(vector<int>& nums) 
    {
        // sort(nums.begin(), nums.end());
        
        unordered_map<int, int> ump;
        unordered_map<int, int> :: iterator itr;
        int sum = 0;
        
        for(int i=0; i<(int)nums.size(); i++)
        {
            if(ump.find(nums[i]) == ump.end()) 
                ump[nums[i]] = 1;
            else 
                ump[nums[i]] += 1;
        }
        
        for(itr = ump.begin(); itr != ump.end(); itr++)
        {
            if(itr->second == 1) 
                sum += itr->first;
        }
        
        return sum;      
    }
};
