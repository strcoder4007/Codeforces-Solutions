import itertools
import math

def main():
    s = input()
    n = s.count("#")

    d = s.count("(") - s.count(")") - n + 1
    if d <= 0:
        print(-1)
        return
    s = s.split("#")
    s = ")".join(s[:-1]) + ")" * d + s[-1]
    
    lvl = 0
    for c in s:
        if c == "(": lvl += 1
        if c == ")": lvl -= 1
        if lvl < 0:
            print(-1)
            return

    for i in range(n - 1):
        print(1)
    print(d)


if __name__ == "__main__":
    main()