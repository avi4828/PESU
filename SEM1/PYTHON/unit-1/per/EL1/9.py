def is_palindrome(word):
    word = word.lower()
    return word == word[::-1]

print(is_palindrome('avi'))
print(is_palindrome('sos'))

