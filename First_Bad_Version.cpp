// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int first , last , mid;
        first = 1;
        long long int pos = 1;
        while(first <= last){
            mid = first + (last - first)/2;
            bool z  = isBadVersion(mid);
            if(z == true){
                pos = mid ;
                last = mid - 1;
            }
            else{
                first = mid + 1;
            }
        }
        return pos;
    }
};
