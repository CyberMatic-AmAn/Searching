def linear_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i  # Found, return index
    return -1  # Not found

