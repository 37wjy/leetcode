#%%
import math
#import random

#n=int(input())
n=1000
val = [0]*n
for i in range(n):
    val[i] = 5

val[-1]=4
list.sort(val,reverse=True)
n=len(val)
l1=0
l2=0
#nfix
l2 = math.ceil(math.log2(n))*sum(val)
for i,v in enumerate(val):
    l1+=(i+1)*v
if n>1:
    l1-=val[-1]

print(min(l1,l2))
# %%
