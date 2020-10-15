import sys
import random
sys.stdout = open("input.txt", "w")
print(1000)
print(*[random.choices(range(-1000000000, 1000000001))[0] for _ in range(1000)])
# random.choices(range(-1000000000, 1000000001))
