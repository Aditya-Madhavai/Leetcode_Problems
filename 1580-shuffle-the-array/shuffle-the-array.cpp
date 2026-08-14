class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int size=nums.size();
        vector<int> arr(2*n);
        int count=0;
        int count2=n; 

        for(int i=0;i<2*n;i++){
            if(i%2==0){
                arr[i]=nums[count++];
            }
            else{
                arr[i]=nums[count2++];
            }
        }
        return arr;
    }
};