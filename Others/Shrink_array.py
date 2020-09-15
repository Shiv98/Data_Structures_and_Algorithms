"""
Shrink the array
Input
7
3 3 4 4 4 3 3

Output 2
array can become 6 4
"""

n = int(input())
v = input().split()
v1 = [ int(i) for i in v]
  
flag = 1
while(flag == 1):
  cnt = 0
  for i in range(len(v1)-1):
    
    if(v1[i]==v1[i+1]):
      v1[i+1] += 1
      del v1[i]
      cnt +=1
      break
    
  
  if (cnt == 0):
    flag = 0
  else:
    flag = 1


print(len(v1))
  
