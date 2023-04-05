class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        vector<pair<int, int>> pairs;
        
        for (int index = 0; index < nums.size(); index++){
            pairs.push_back({nums[index], index});
        }
        
        sort(pairs.begin(), pairs.end());
        
        int left = 0;
        int right = nums.size()-1;
        
        while(left < right){
            if (pairs[left].first + pairs[right].first == target){
                return {pairs[right].second, pairs[left].second};
            }
            if (pairs[left].first + pairs[right].first < target){
                left++;
            }
            else{
                right--;
            }
        }

        return {};     
    }
};
