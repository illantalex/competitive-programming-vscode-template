r = int(input())
if r % 3 == 0:
    print(r // 3)
elif r % 3 == 1:
    print((2**64 - 1) // 3 * 2 + r // 3 + 1)
elif r % 3 == 2:
    print((2**64 - 1) // 3 + r // 3 + 1)
