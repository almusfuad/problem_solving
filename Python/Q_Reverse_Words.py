string = str(input())
words = string.split()
reversed_words = []
for word in words:
    reversed_word = word[::-1]
    reversed_words.append(reversed_word)
result = " ".join(reversed_words)
print(result)