class Solution {
public:
    vector<int> decode(vector<int>& encoded, int& first) 
    {
        vector<int> arr(encoded.size()+1);
        arr[0] = first;
        
        int current = arr[0];
        for(int i=0; i<(int)encoded.size(); i++)
        {
            arr[i+1] = current ^ encoded[i];
            current = arr[i+1];
        }
        
        return arr;
    }
};
