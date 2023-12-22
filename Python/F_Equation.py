def equation(x, n):
    sum = 0
    for i in range(1, n+1):
        if i%2==0:
            sum += x**i
    return sum

x, n = map(int, input().split())
result = equation(x, n)
print(result)