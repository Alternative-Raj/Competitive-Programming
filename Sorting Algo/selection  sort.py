def selection_sort(l):
    for i in range(len(l)):
        for j in range(len(l)):
            if l[i] > l[j]:
                l[i], l[j] = l[j] = l[i]
    return l