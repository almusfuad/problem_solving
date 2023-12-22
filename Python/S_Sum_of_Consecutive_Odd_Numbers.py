def range_odd(n1, n2):
    total = 0
    for n in range(n1+1, n2):
        if n%2 != 0:
            total += n
    print(total)

t = int(input())
for _ in range(t):
    n1, n2 = map(int, input().split())
    if n1>n2:
        range_odd(n2, n1)
    else:
        range_odd(n1, n2)