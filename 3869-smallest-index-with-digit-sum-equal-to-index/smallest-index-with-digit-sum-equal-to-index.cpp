class Solution {
public:
    int digSum(int num){
        int sum = 0;
        while(num){    
            sum+=num%10;
            num/=10;
        }
        return sum;
    }
    
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int ds=digSum(nums[i]);
            if(i==ds)return i;
        }
        return -1;
    }
};