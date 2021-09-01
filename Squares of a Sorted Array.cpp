//First Solution written is actually the most basic solution that everyone can think of and it's quite naive.

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       for(int i = 0 ; i < nums.size() ; i++){
           nums[i] = nums[i] * nums[i]; 
       }
        
        sort(nums.begin() , nums.end());
        
        return nums;
        
        
    }
};

//This one is neat and clean

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        
        int start = 0;
        int end = nums.size() - 1;
        
        for(int i = nums.size() - 1 ; i >= 0 ; i--){
            if(abs(nums[end]) > abs(nums[start])){
                ans[i] = nums[end] * nums[end];
                end--;
            }
            else{
                ans[i] = nums[start] * nums[start];
                start++;
            }
        }
        
        return ans;
    }
};
