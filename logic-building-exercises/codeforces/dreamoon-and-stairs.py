# https://codeforces.com/problemset/problem/476/A
#
"""
Dreamoon wants to climb up a stair of n steps. He can climb 1 or 2 steps at each move. Dreamoon wants the number of moves to be a multiple of an integer m.

What is the minimal number of moves making him climb to the top of the stairs that satisfies his condition?

Input
The single line contains two space separated integers n, m (0 < n ≤ 10000, 1 < m ≤ 10).

Output
Print a single integer — the minimal number of moves being a multiple of m. If there is no way he can climb satisfying condition print  - 1 instead.

Examples
Input
10 2
Output
6
Input
3 5
Output
-1
"""
import math

def minimal_moves(n, m):
    start = math.ceil(n/2)
    for moves in range(start, n+1):
        if moves % m == 0:
            return moves

    return -1


def main():
    
    n,m = map(int, input().split())

    result = minimal_moves(n, m)
    print(result)

"""
Ensures that main() runs only when the script is executed directly, not when imported.
"""
if __name__ == "__main__":
    main()

