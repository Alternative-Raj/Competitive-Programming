hash = [0] * (10000000)

def hashing(q):
    for i in range(len(q)):
        hash[q[i]] += 1
    