class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int numofZero=0;
        for(int i=0;i<nums.size();i++)      //寻找零的个数
        {
            if(nums[i]==0)
            {
                numofZero++;
            }
        }

        for(int i=0;i<numofZero;i++)        //将若干零移动到数组尾部
        {
            for(int j=0;j<nums.size()-1;j++)
            {
                if(nums[j]==0)
                {
                    int temp=nums[j+1];
                    nums[j+1]=nums[j];
                    nums[j]=temp;
                }
            }
        }
    }

    
};
