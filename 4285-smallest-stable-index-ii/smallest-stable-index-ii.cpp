class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>nums2;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i:nums){
            maxi=max(maxi,i);
            nums2.push_back(maxi);
        }
        int ans=-1;
        for(int i=nums.size()-1;i>=0;i--){
            mini = min(mini,nums[i]);
            if(nums2[i]-mini<=k){
                ans=i;
            }
        }
        return ans;
    }
};