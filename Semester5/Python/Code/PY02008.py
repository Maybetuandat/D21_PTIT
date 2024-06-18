n, x = map(int, input().split())
def get_primes(n):
    numbers = set(range(n, 1, -1))
    primes = []
    while numbers:
        p = numbers.pop()
        primes.append(p)
        numbers.difference_update(set(range(p*2, n+1, p)))
    return primes
isprime = get_primes(10000)
for i in range(n+1):
    print(x, end =  " ")
    x += isprime[i]