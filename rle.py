def rle(text, no_ones):
    result = ""
    count = 1

    for i in range (1, len(text)):
        if text[i] == text[i-1]:
            count = count + 1
        else:
            result = result + text[i - 1]
            result = result + str(count)
            count = 1


    result = result + text[-1]
    result = result + str(count)

    if no_ones:
        result = result.replace("1", "")

    return result


