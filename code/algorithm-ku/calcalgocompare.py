#Calculate the maximum number of comparisons this algorithm makes if the lengths of the two given lists are m and n, respectively.

a = [10,11,12,13,14,15,16,17,18,19]
b = [1,2,3,4,5,6,7,8,9,100]
result = []
i = 0
j = 0

#The maximum number of comparisons is  m + n - 1

comparecounter = 0
while i < len(a) and j < len(b):
    comparecounter += 2
    if a[i] == b[j]:
        result.append(a[i])
        i += 1
        j += 1
        comparecounter -= 1
    elif a[i] < b[j]:
        i += 1
    else:
        j += 1

print(result)
print(comparecounter)
