/* In this question we have to determine the maximum sum of the subarray we can solve it using simple loop to calculate sum and comparing it 
with maximum sum */


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
         int currentsum=0;
        int maxSum = INT_MIN;
    
    for(int i=0;i<nums.size();i++){
        
        currentsum=currentsum + nums[i];
           if(currentsum>maxSum)
            {
                maxSum=currentsum;
            }
           
              if(currentsum<0)
            {
                currentsum=0;
            }
        }
        return maxSum;
    }
};
