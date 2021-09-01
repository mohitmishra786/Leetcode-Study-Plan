//Here i am having some neat and fast solution

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto it = find(nums.begin() , nums.end() , target);
        if(it != nums.end()){
            return it - nums.begin();
        }
        return lower_bound(nums.begin() , nums.end() , target) - nums.begin();
    }
};


//We can also do it simply through while loop solution also. let's see it


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0 ; int end = nums.size();
        int mid;
        
        while(left < end){
            mid = (left  + end)/2;
            if(nums[mid] >=  target){
                end = mid;
            }
            else{
                left = mid + 1;
            }
        }
        return left;
    }
};
