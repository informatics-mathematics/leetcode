class Solution {
public:
    bool isPalindrome(string& s, int i, int j) 
    {
        while (i < j)
            if (s[i++] != s[j--]) return false;
        return true;
    }
    
    bool validPalindrome(string& s) 
    {
        int i = -1;
        int j = s.length();
        while (++i < --j)
            if (s[i] != s[j])
                return isPalindrome(s, i+1, j) || 
                       isPalindrome(s, i, j-1);
        return true;
    }
};
