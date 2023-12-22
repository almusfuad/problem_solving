def fibonacci(n):
    fib_seq = [0, 1]
    
    for i in range(2, n):
        next_fib = fib_seq[-1] + fib_seq[-2]
        fib_seq.append(next_fib)
    return fib_seq


n = int(input())
result = fibonacci(n)
for i in result[:n]:
    print(i, end = " ")