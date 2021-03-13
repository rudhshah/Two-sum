class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> match;
        vector<int> result;
        int temp =0;
        for(int i =0; i < nums.size(); i++){
            if(match.find(nums[i]) != match.end()){
                result.push_back(match[nums[i]]);
                result.push_back(i);
            }
               else{
                   match[target - nums[i]] = i; 
               }
        }
        return result;
    }
};
