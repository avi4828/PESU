from collections import defaultdict

N = int(input("Enter the number of words: "))
anagrams = defaultdict(list)

for _ in range(N):
    word = input("Enter a word: ")
    sorted_word = "".join(sorted(word))
    anagrams[sorted_word].append(word)

for group in anagrams.values():
    if len(group) >= 3:
        print(group)