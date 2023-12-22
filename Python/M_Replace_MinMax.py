n = int(input())
arr = list(map(int, input().split()))
maximum = max(arr)
minimum = min(arr)
min_index = arr.index(minimum)
max_index = arr.index(maximum)
arr[max_index], arr[min_index] = arr[min_index], arr[max_index]
for i in arr:
    print(i, end=' ')