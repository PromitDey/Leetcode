class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        
        int n = nums.size();
        if(n==1){
            return 0;
        }
        
        sort(nums.begin(), nums.end());
        
        int high=nums[n-1];
        int low=nums[0];
        
        int diff = high-low;
        int maxi, mini;
        
            for(int i=0; i<n-1; i++){
                maxi = max(high-k, nums[i]+k);
                mini = min(low+k, nums[i+1]-k);
                
                diff = min(diff, maxi-mini);
            }
        return diff;
    }
};