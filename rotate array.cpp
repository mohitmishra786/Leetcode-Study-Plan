class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //k = k % n;
        int n = nums.size();
        k = k % n;
        reverse(nums.begin() , nums.end() - k);
        reverse(nums.end() - k , nums.end());
        reverse(nums.begin() , nums.end());
    }
};
