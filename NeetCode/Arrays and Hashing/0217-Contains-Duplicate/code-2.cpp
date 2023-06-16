class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_set<int> n;

        for(int i=0;i<nums.size();i++){
            if(n.find(nums[i])!=n.end())
            {return true;}
            n.insert(nums[i]);
        }
       return false;

    }
 
};