class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        
        std::sort(nums1.begin(), nums1.begin()+n);
        std::sort(nums2.begin(), nums2.begin()+m);
        
        set<int>s;
        
        int i=0,j=0;
        while(i<n && j<m){
            if(nums1[i]>nums2[j]){
                j++;
            }
            else if(nums2[j]>nums1[i]){
                i++;
            }
            else{
                s.insert(nums1[i]);
                i++;
                j++;
            }
        }
        vector<int>ans;
        for(auto i:s)
            ans.push_back(i);
        return ans;
    }
};