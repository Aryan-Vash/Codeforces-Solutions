def nearest(n):
    for i in range(len(n)):
        if (n[i] == '0'):
            continue
        x = int(n[i])
        if (int(n) % x != 0):
            return nearest(str(int(n) + 1))
    return n

t = int(input())
for i in range(t):
    n = str(input())
    print(nearest(n))