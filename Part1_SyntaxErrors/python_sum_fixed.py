# Python : Calculate the sum of an array (fixed version)
def calculate_sum(arr):
    total = 0   # ✅ corrected: use digit 0 instead of letter o
    for num in arr:
        total += num
    return total

numbers = [1, 2, 3, 4, 5]
result = calculate_sum(numbers)
print("Sum in Python:", result)
