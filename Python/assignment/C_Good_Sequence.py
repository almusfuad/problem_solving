n = int(input())
arr = list(map(int, input().split()))

count = {}

for num in arr:
    if num in count:
        count[num] += 1
    else:
        count[num] = 1

removals = 0

for num, frequency in count.items():
    if frequency < num:
        removals += frequency
    elif frequency > num:
        removals += frequency - num

print(removals)