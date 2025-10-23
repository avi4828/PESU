
from collections import deque
import re

def is_palindrome(s):
    s = re.sub(r'\W+', '', s).lower()
    d = deque(s)

    while len(d) > 1:
        if d.popleft() != d.pop():
            return False
    return True

s = input("Enter a string: ")
print("TRUE" if is_palindrome(s) else "FALSE")