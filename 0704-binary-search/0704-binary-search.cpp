class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
            
        }
        return -1;
    }
};
/// to say u solved it in less than 10 mins
//well done