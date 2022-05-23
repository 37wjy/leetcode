#%%
from typing import List

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        ans=strs[0]
        for i in range(1,len(strs)):
            curr = strs[i]
            for j in range( min(len(ans),len(curr))  ):#
                if ans[j]!=curr[j]:
                    ans=ans[:j]
                    break
            else:
                ans=ans[:min(len(ans),len(curr)) ]
        return ans

#%%
Solution().longestCommonPrefix(strs = ["flower","flow","flight"])

# %%
