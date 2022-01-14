import random

tests=[]
for i in range(3000):

    t=''
    n = random.randint(1, 10)
    t+=f'{n}\n'
    for _ in range(n):
        t+=f'{random.randint(1, 1000)} '

    tests.append(t)

### Testing

from subprocess import Popen, PIPE, run
first=1
for test in tests:

    open('input.txt', 'w').write(test)

    res = run(['main.exe'])
    
    res2 = run(['correct.exe'])

    fast = open('output.txt', 'r').read().strip()
    correct = open('correct.txt', 'r').read().strip()

    if first:
        print(test)
        print(fast)
    first=0

    print('OK')
    

    if (fast != correct):
        print('INCORRECT')
        print(test)
        print(fast)
        print(correct)

        break



    
