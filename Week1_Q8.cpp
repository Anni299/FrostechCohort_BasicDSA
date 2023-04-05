class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      if (nums.size() == 0){
        return 0;
      } 

  int slot = 1;
  for (int i = 1; i < nums.size(); i++) {
    if (nums[i] != nums[slot - 1]) {
      nums[slot] = nums[i];
      slot++;
    }
  }

  return slot;        
    }
};
