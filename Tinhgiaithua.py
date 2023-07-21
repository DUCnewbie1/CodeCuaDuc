def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)

n = int(input('Nhập số tự nhiên n: '))
print(f'Giai thừa của {n} là {factorial(n)}')
