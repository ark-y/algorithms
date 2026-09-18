def max_sub_arr(a):

    sur, best, = a[0]

    for i in range(1, len(a)):
        cur = max(a[i], cur + a[i])
        best = max(best, cur)
    return best