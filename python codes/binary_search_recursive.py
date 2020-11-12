def binarySearch(arr, start, end, element):

    if end < start:
        return -1

    mid = (start + end) // 2

    if element == arr[mid]:
        return mid

    elif element > arr[mid]:
        return binarySearch(arr, mid + 1, end, element)

    else:
        return binarySearch(arr, start, mid - 1, element)


print(binarySearch([1, 5, 8, 15, 19, 23, 28], 0, 6, 8))
