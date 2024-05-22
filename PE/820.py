def a(n): 
    return (10**n//n)%10
ans = 0
for n in range(1, 101):
    print(n)
    ans += a(n)
print(ans)