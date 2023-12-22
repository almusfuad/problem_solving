s  = str(input())
split_string = []
count_L = 0
count_R = 0

for char in s:
    if char =='L':
        count_L += 1
    else:
        count_R += 1
        
    if count_L == count_R:
        split_string.append(s[:count_L+count_R]) # adding l=r to their combined length (l+r)
        s = s[count_L+count_R:] # set string, starting from the length of (l+r) to the end
        # after that, set the count of l and r to 0
        count_L = 0
        count_R = 0
        
print(len(split_string))
for s in split_string:
    print(s)