class Solution {
public:
    bool halvesAreAlike(string s)
    {
        int a = 0;
        
        for(int i=0, j=s.length()/2; i<s.length()/2, j<s.length(); i++, j++)
        {
            a += (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' ||
                  s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' ||
                  s[i] == 'u' || s[i] == 'U');
            
            a -= (s[j] == 'a' || s[j] == 'A' || s[j] == 'e' || s[j] == 'E' ||
                  s[j] == 'i' || s[j] == 'I' || s[j] == 'o' || s[j] == 'O' ||
                  s[j] == 'u' || s[j] == 'U');
        }
        
        return (!a);
    }
};
