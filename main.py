# Remove these 3 lines while submitting your code online
# ONLINE_JUDGE = True
ONLINE_JUDGE = False
if not ONLINE_JUDGE:
    try:
        import sys

        sys.stdin = open("input.txt", "r")
        sys.stdout = open("output.txt", "w")
    except BaseException:
        pass
n, s = input().split()
cnt = 0
n = int(n)
for i in range(n + 1):
    for j in range(i):
        slc = s[j:i]
        if slc.count("A") == slc.count("T") and slc.count("G") == slc.count("C") and slc:
            # print(slc)
            cnt += 1
print(cnt)
