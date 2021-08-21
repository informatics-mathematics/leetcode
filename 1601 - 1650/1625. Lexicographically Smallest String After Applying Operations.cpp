class Solution {
public:
    string ans = "";
    // adding global
    
    string add(string s, int& a)
    {
        string nstr;
        for(int i=0; i<s.length(); i++)
            nstr += (i & 1) ? ((s[i] - '0' + a)%10 + '0') : s[i];
        
        return nstr;
    }
    string rot(string s, int& b)
    {
        string nstr;
        nstr += s.substr(s.length()-b);
        nstr += s.substr(0, s.length()-b);
        
        return nstr;
    }
    void bfs(string s, int& a, int& b, unordered_set<string>& st)
    {
        if(st.find(s) != st.end()) return;
        
        st.insert(s);
        ans = min(ans, s);
        bfs(add(s, a), a, b, st);
        bfs(rot(s, b), a, b, st);
    }
    string findLexSmallestString(string s, int& a, int& b) 
    {
        ans = s;
        unordered_set<string> st;
        bfs(s, a, b, st);
    
        return ans; 
    }
};
