def ternary_search(arr, left, right, target):
    if left > right:
        return -1
    mid1 = left + (right - left) // 3
    mid2 = right - (right - left) // 3

    if arr[mid1] == target:
        return mid1
    if arr[mid2] == target:
        return mid2

    if target < arr[mid1]:
        return ternary_search(arr, left, mid1 - 1, target)
    elif target > arr[mid2]:
        return ternary_search(arr, mid2 + 1, right, target)
    else:
        return ternary_search(arr, mid1 + 1, mid2 - 1, target)

