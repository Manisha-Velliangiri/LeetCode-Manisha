class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //in reverse,sort the 2nd parameter indicates one position less
        k %=nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};