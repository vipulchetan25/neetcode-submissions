class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int maxCount = nums[0];
        for(int i = 0;i<nums.size();i++){
            if(maxCount == nums[i]) {
                count++;
            }
            else if(count == 0){
                maxCount = nums[i];
            }
            else{
                count--;
            }
        }

        return maxCount;
    }
};