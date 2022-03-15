#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        auto count = 1;
        auto max = bitWise(nums, (1<<nums.size())-1);
        for(auto i=0;i<nums.size(),++i)
            if(bitWise(nums,i)==max)
                count++;
        return count;
    }

    int bitWise(vector<int>& nums,int mask){
        int count = 0;
        for(auto i=0,i<nums.size(),++i)if(mask&1<<i)count|=nums[i];
        return count;
    }
};


int main(int argc, char const *argv[])
{
    Solution s = Solution();
    s.countMaxOrSubsets(&vector<int>{[1,2,3]});
    return 0;
}
