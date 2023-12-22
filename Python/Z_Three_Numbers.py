def total_numbers(k, s):
    count = 0
    for x in range(k+1):
        for y in range(k+1):
            z = s - x - y
            if 0 <= z <= k:
                count += 1
    return count

k, s = map(int, input().split())
result = total_numbers(k, s)
print(result)