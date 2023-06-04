class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }

        unordered_map<int,vector<int>> cnt;
        
        for(auto it=map.begin();it!=map.end();it++){
           cnt[it->second].push_back(it->first);
            
        }
        vector<int> ans;
        for(int i=nums.size();i>=0;i--){
            if(ans.size()>=k)
                break;

            if(!cnt.empty()){
                ans.insert(ans.end(),cnt[i].begin(),cnt[i].end());
            }        
        }

        return ans;


    }
};