class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> lookup;
        vector<int> ans;

        for(int i=0; i<nums.size(); i++){
            int complement = target - nums[i];
            if(lookup.find(complement) != lookup.end()){
                ans.push_back(lookup[complement]);
                ans.push_back(i);
                break;
            }else{
                lookup.insert(make_pair(nums[i], i));
            
            }
        }
        return ans;
        
    }
};
