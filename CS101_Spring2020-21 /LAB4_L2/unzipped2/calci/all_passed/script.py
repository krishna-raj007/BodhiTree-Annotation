import subprocess
passed = 0
subprocess.call(["./a.out <../Input/1 >out.txt"], shell=True)
with open('out.txt', 'r') as f:
    d = [line.strip() for line in f if line.strip()]
with open('../Output/1', 'r') as f:
    e = [line.strip() for line in f if line.strip()]
if len(d) == len(e):
    fg = 0
    for a, b in zip(d, e):
        if a != b:
            fg = 1
            break
    if fg == 0:
        passed += 1
print(d,e)
subprocess.call(["./a.out <../Input/2 >out.txt"], shell=True)
with open('out.txt', 'r') as f:
    d = [line.strip() for line in f if line.strip()]
with open('../Output/2', 'r') as f:
    e = [line.strip() for line in f if line.strip()]
if len(d) == len(e):
    fg = 0
    for a, b in zip(d, e):
        if a != b:
            fg = 1
            break
    if fg == 0:
        passed += 1
print(d,e)
