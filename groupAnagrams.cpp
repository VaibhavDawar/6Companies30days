class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        
        map<string,vector<string>> mpp;
        
        for(auto &it : string_list)
        {
            string temp = it;
            sort(begin(temp),end(temp));
            mpp[temp].push_back(it);
        }
        
        vector<vector<string>> ans;
        
        for(auto &it : mpp)
        {
            ans.push_back(it.second);
        }
        
        return ans;
    }
};