class Solution {
public:
    int missingNumber(vector<int>& nums) {
       //can find the missing number by 
       //expected sum-actual sum

       int n=nums.size();
       //using gaussian formula
       int expected= (n*(n+1)/2);

       int actual=0;
       for(int i=0;i<nums.size();i++)
       {
              actual =actual+nums[i];
       } 
       return expected-actual;
   }
};