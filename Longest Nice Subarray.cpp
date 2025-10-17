class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size();

        int i = 0, j = 0;
        int mask = 0;

        int result = 1;

        while(j < n){
            while((mask & nums[j]) != 0){
                mask ^= nums[i];
                i++;
            }

            mask |= nums[j];
            result = max(result, j - i + 1);
            j++;
        }

        return result;
    }
};
