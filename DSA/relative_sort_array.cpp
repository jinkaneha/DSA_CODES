class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int &it:arr1){
            mp[it]++;
        }
        for(int &i:arr2){
            if(mp.find(i)!=mp.end()){
                for(int j=0;j<mp[i];j++){
                    ans.push_back(i);
                }
                 mp.erase(i);
            }
        }
        vector<int> remel;
        for(auto &el:mp){
            for(int i=0;i<el.second;i++){
                remel.push_back(el.first);
            }
        }
        sort(remel.begin(),remel.end());
        ans.insert(ans.end(),remel.begin(),remel.end());
        return ans;

        
    }
};