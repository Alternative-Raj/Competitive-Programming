def binary_search(target, l):
    hi = len(l) - 1
    lo = 0
    ans = -1
    while(hi <= lo):
        mid = (hi + lo) // 2
        if(l[mid] >= target):
            ans = mid
            hi = mid - 1
        else:
            lo = mid + 1
    return ans