class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = 0;
        for(int i:nums){
            sum+=i;
        }
        int k = sum - x;
        int n = nums.size();
        if(k<0)return -1;
        if(k==0)return n;
        int maxi = -1; int i=0; int s=0;
        for(int j=0;j<n;j++){
            s+=nums[j];
            while(s>k)s-=nums[i++];
            if(s==k)maxi=max(maxi,j-i+1);
        }
        return maxi+1 ? n-maxi : -1;
    }
};