class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int zerono=1;
        int noofzero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                noofzero++;
                zerono=i;
                continue;
            }
            
            product*=nums[i];
        }
        int var=1;
        for(int i=0;i<nums.size();i++){
            if(noofzero > 1){
                nums[i]=0;
                continue;
            }
            if(noofzero==1 && i==zerono){
                nums[i]=product;
                continue;
            }
            if(noofzero==1 && i!=zerono){
                nums[i]=0;
                continue;
            }
            var=product/nums[i];
            nums[i]=var;
        }
        return nums;
    }

};