# def compute_prefix_sum(arr):
#     n = len(arr)
#     prefix_sum = [0] * (n+1)
#     for i in range(n):
#         prefix_sum[i+1] = prefix_sum[i] + arr[i]
#     return prefix_sum

# n, q = map(int, input().split())
# arr = list(map(int, input().split()))
# prefix_sum = compute_prefix_sum(arr)

# for _ in range(q):
#     l, r = map(int, input().split())
#     result = prefix_sum[r] - prefix_sum[l-1]
#     print(result)


n, q = map(int, input().split())
a = list(map(int, input().split()))

for _ in range(q):
    l, r = map(int, input().split())
    result = sum(a[l-1:r])
    print(result)