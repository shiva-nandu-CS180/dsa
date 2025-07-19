class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>um;
        for(int i=0;i<nums.size();i++){
            um[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int val=target-nums[i];
            if(um.find(val)!=um.end()&&um[val]!=i){
                return{i,um[val]};
            }
        }
        return {};
    }
};