class Solution {
public:
    int freq(unordered_map<char, int>& ump)
    {
        int mx = 0;
        for(auto z = ump.begin(); z != ump.end(); z++)
            mx = (mx > z->second) ? mx: z->second;
        
        return mx;
    }
    int characterReplacement(string s, int k) 
    {
        unordered_map<char, int> ump;
        int res = 0;
        
        int L=0, R=0;
        
        for(R=0; R<(int)s.length(); R++)
        {
            if(ump.find(s[R]) != ump.end()) ump[s[R]] += 1;
            else ump[s[R]] = 1;
            
            if((R - L + 1) - freq(ump) > k)
            {
                ump[s[L]] -= 1;
                L += 1;
            }
            
            res = max(res, R - L + 1);
        }
        
        return res;
    }
};
