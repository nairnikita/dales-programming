word1 = input("Enter word: ")
word2 = input("Enter another word: ")

for i in word1:
    needed = word1.count(i)
    available = word2.count(i)

    if needed > available:
        print("Not possible")
        break

else:
    print("Possible")

