s1 = input()
s2 = input()
s1 = s1.lower()
s2 = s2.lower()
s1 = list(s1)
s2 = list(s2)
var = False
for i in range(len(s1)) :
    if s1[i] < s2[i] :
        print(-1)
        var = True
        break
    elif s1[i] > s2[i] :
        print(1)
        var = True
        break
if not var :
    print(0)
