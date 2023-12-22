n = int(input())
arr = list(map(int, input().split()))
max_operation = float('inf')

for num in arr:
    operations = 0
    while num % 2 == 0:
        num //=2
        operations += 1
    max_operation = min(max_operation, operations)
    
if max_operation == 0:
    print(0)
else:
    print(max_operation)