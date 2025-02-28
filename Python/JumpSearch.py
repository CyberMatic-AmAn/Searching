import math

def jump_search(arr, target):
    n = len(arr)
    step = int(math.sqrt(n))
    prev, curr = 0, 0

    while curr < n and arr[curr] < target:
        prev = curr
        curr += step
        if curr >= n:
            break

    for i in range(prev, min(curr, n)):
        if arr[i] == target:
            return i
    return -1

