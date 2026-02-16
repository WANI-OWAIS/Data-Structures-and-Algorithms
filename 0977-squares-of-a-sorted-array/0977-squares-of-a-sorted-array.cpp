class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(n);

        int left = 0;
        int right = n-1;
        int idx = n-1;

        while(left <= right){
            if(abs(nums[left]) > abs(nums[right])){
                res[idx] = nums[left] * nums[left];
                left++;
            }else{
                res[idx] = nums[right] * nums[right];
                right--;
            }

            idx--;
        }

        return res;
    }
};