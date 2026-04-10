#!/usr/bin/python3

import sys
import random

def cmdlinearg(name, default=None):
    for arg in sys.argv:
        if arg.startswith(name + "="):
            return arg.split("=")[1]
    if default is None:
        print("missing parameter", name)
        sys.exit(1)
    return default


random.seed(int(cmdlinearg('seed', sys.argv[-1])))
n = int(cmdlinearg('n'))

st = []
p = []

for i in range(1, n + 1):
    if random.randint(0, 1) == 0:
        st.append(i)
    else:
        p.insert(0, i)

while st:
    p.insert(0, st.pop())

print(n)
print(*p)
