class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int> result;
       int flag = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j<nums.size();j++){
                if(nums[i]+ nums[j]==target){
                    result.push_back(i);
                    result.push_back(j);
                    flag = 1;
                    break;
                }
            }
            if(flag==1){
                break;
            }
        }
        return result;
    }
};
