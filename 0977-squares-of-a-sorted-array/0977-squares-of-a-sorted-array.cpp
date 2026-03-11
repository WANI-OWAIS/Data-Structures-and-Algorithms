class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int i = 0, j = n-1;
        int idx = n-1;

        while(i <= j){
            if(abs(nums[i]) > abs(nums[j])){
                res[idx] = nums[i] * nums[i];
                i++;
            }else{
                res[idx] = nums[j] * nums[j];
                j--;
            }
            idx--;
        }

        return res;
    }
};