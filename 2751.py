def merge_sort(L):

    if len(L) == 1:
        return L
    
    middle = len(L) // 2
    left = L[:middle]
    right = L[middle:]

    left1 = merge_sort(left)
    right1 = merge_sort(right)

    return merge(left1, right1)

def merge(left, right):

    i = 0
    j = 0
    sort_L = []

    while (i < len(left) ) and (j < len(right) ):
        if left[i] < right[i]:
            sort_L.append( left[i] )
            i += 1
        else:
            sort_L.append( right[j] )
            j += 1

    while (i < len(left) ):
        sort_L.append( left[i] )
        i += 1

    while (j < len(right) ):
        sort_L.append( right[j] )
        j += 1

    return sort_L
        
    

N = int(input(''))
L = []

for i in range(N):
    data = int(input(''))
    L.append(data)

sort_L = merge_sort(L)

print(sort_L)
for i in range(len(sort_L) ):
    print(sort_L[i])

