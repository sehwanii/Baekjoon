n = int(input())
numbers = list(map(int, input().split()))
N, P = map(int, input().split())
# 결과 출력
ret = 0
for i in numbers:
    ret+=int((i-1)/N+1)
print(ret)
print(int(n/P), n%P)