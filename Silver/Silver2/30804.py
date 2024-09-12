def max_fruit_length(n, fruits):
    left = 0
    right = 0
    max_length = 0
    fruit_count = {}

    while right < n:
        # 오른쪽 포인터가 가리키는 과일 추가
        if fruits[right] in fruit_count:
            fruit_count[fruits[right]] += 1
        else:
            fruit_count[fruits[right]] = 1

        # 과일 종류가 2종류를 초과하면 왼쪽 포인터 이동
        while len(fruit_count) > 2:
            fruit_count[fruits[left]] -= 1
            if fruit_count[fruits[left]] == 0:
                del fruit_count[fruits[left]]
            left += 1

        # 현재 두 종류 이하의 과일을 포함한 최대 길이 갱신
        max_length = max(max_length, right - left + 1)
        right += 1

    return max_length

# 입력 받기
N = int(input())
fruits = list(map(int, input().split()))

# 결과 출력
print(max_fruit_length(N, fruits))
