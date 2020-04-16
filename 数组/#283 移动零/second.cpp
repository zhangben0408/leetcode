class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int numOfNotZero = 0;
        for(int i=0;i<nums.size();i++)                       //将非零移动到数组前面
        {
            if(nums[i]!=0)
            {
                nums[numOfNotZero]=nums[i];
                numOfNotZero++;
            }
        }
        for(int i=numOfNotZero;i<nums.size();i++)             //将末尾若干位清零
        {
            nums[i]=0;
        }
    }
};
