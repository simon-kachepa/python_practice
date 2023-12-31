input_str = input("Enter your string here: ")
right = len(input_str) - 1
left = 0
isPalindrome = False
while left < right:
    if input_str[left].lower() != input_str[right].lower():
        print(f"{input_str} is not a palindrome word")
        break
    right -= 1
    left += 1
else:
    print(f"{input_str} is a palindrome word")
