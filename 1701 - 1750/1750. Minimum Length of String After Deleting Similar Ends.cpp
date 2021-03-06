class Solution {
public:
    int minimumLength(string s) 
    {
        if(s.length() == 1) return 1;
        
        int pFix = 0; // prefix Index
        int sFix = s.length()-1; // suffix Index
        
        if(s[pFix] != s[sFix]) return s.length();
        // sFix - pFix + 1
        
        while(s[pFix] == s[sFix])
        {
            // group duplicate elements in Prefix
            while(s[pFix] == s[pFix+1])
                pFix++;
            
            if(pFix == sFix) break;
            // if pFix and sFix intersect - min length = 0;
            
             while(s[sFix] == s[sFix-1])
                sFix--;
            
            // edge case
            if((sFix - pFix) == 2) return 1;
            // middle letter is different 
            
            // incrementing prefix and suffix
            pFix += 1;
            sFix -= 1;
        }
        
        if(pFix == sFix) return 0;
        else return sFix - pFix + 1;
       
    }
};
