class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = (int)nums.size();
        int k = n/3;

        long long ans = 0;
        int index = n-2;
        for (int i= 0 ; i <k; i++)
        {
            ans += nums[index];
            index -=2 ;
        }
        return ans;
        
    }
};
