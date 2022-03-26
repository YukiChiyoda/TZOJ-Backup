while True:
    try:
        a, b = map(int, input().strip().split())
        print(a // b, end = ' ')
        print(a % b)
    except EOFError:
        break