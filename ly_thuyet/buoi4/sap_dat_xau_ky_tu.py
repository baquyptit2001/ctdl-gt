def check(s):
    store = dict()
    max = 0
    for i in range(len(s)):
        store[s[i]] = store.get(s[i],0)+1
        if store[s[i]]>max:
            max=store[s[i]]
    if max<=(len(s)+1)/2:
        return 1
    return -1
        
t = int(input())

for u in range(t):
    s = input()
    print(check(s))