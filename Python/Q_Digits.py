def reverse_digits(n):
    num_str = str(n)
    for digit in reversed(num_str):
        print(digit, end=" ")

test = int(input())
for _ in range(test):
    n = int(input())
    reverse_digits(n)
    print()