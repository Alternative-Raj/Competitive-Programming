def linear_search(t, l):
    ans = -1 
    for i in range(len(l)):
        if l[i] == t:
            ans = i
            break
    return ans