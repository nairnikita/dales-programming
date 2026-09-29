digits = []

amount = int(input("How many digits do you want to enter: "))

for i in range(amount):
    digit = int(input("Enter a digit: "))
    digits.append(digit)

most = 0
multimodal = 0

for i in digits:
    count = digits.count(i)

    if count > most:
        most = count

for j in range(10):
    if digits.count(j) == most:
        multimodal = multimodal + 1

if multimodal > 1:
    print("Data was multimodal")
else:
    print(most)