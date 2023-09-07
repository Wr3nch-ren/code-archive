#Design an algorithm to find all the common elements in two sorted lists of numbers.
#For example, for the lists 2, 5, 5, 5 and 2, 2, 3,
#5, 5, 7, the output should be 2, 5, 5.What is the maximum number of
#comparisons your algorithm makes if the lengths of the two given lists
#are m and n, respectively?

#a = [2,5,5,5]
#b = [2,2,3,5,5,7]

a = [10,11,12,13,14,15,16,17,18,19]
b = [1,2,3,4,5,6,7,8,9,100]
result = []
i = 0
j = 0
while i < len(a) and j < len(b):
    if a[i] == b[j]:
        result.append(a[i])
        i += 1
        j += 1
    elif a[i] < b[j]:
        i += 1
    else:
        j += 1
print(result)
