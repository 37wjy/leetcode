#%%
import os
from re import sub
os.path.join('/Users/wjy/Documents/LC/thoj/2/')
import subprocess
#%%
tmp = subprocess.Popen('./2-1',universal_newlines=True ,bufsize=0,stdout = subprocess.PIPE,stdin=subprocess.PIPE ,shell=True)
#%%
data = ['5','1 0 0 0 0','0 0 0 0 0','0 0 0 1 0','1 1 0 1 0','0 0 0 1 0']
tmp.stdin.writelines(data)
#tmp.communicate()
# %%
tmp.stdout.read(10)
# %%
