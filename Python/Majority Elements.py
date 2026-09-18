def majority_element(a):
    cand, count = a[0], 0 
    for x in a: 
        if count == 0:
            cand = x
        count += 1 if x == cand else -1
    return cand