class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int min=nums[0],max=nums[0],flag=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<min)
                min=nums[i];
            if(nums[i]>max)
                max=nums[i];
        } 
        vector<int> arr;
        for(int i=min;i<max;i++){
            flag=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==i){
                    flag=1;
                }
            }
            if(flag==0){
                arr.push_back(i);
            }
        }
        return arr;
    }
};