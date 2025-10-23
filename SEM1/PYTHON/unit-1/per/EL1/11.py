def check_strength(password):
    if len(password) < 8:
        return "Weak"

    has_upper = False
    has_lower = False
    has_digit = False
    has_special = False

    for ch in password:
        if ch.isupper():
            has_upper = True
        elif ch.islower():
            has_lower = True
        elif ch.isdigit():
            has_digit = True
        elif not ch.isalnum():
            has_special = True

    if has_upper and has_lower and has_digit and has_special:
        return "Strong"
    else:
        return "Weak"


print(f'Hello123! this password is {check_strength("Hello123!")}')   
print(f'hello123 this password is {check_strength("hello123")}')  
print(f'HELLO123! this password is {check_strength("HELLO123!")}') 
print(f'Abc! this password is {check_strength("Abc!")}')      
