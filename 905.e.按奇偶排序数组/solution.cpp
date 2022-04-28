#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int h=0,t=nums.size()-1;
        while (h<t)
        {
            if (nums[h]%2)
            {
                for (; h < t; --t) if (nums[t]%2==0) break;         
                int tmp=nums[h];
                nums[h]=nums[t];
                nums[t]=tmp;
            }
            ++h;
        }
        return nums;
    }
};


int main(int argc, char const *argv[])
{   
    vector<int> a{3,1,2,4};
    vector<int> s= Solution().sortArrayByParity(a);
    return 0;
}
