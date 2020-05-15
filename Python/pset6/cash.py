from cs50 import get_float

i = -1.00
count = 0
while i < 0:
    i = get_float("Change owed: ")

f = int(i * 100)
if f >= 25:
    count += int(f / 25)
    f %= 25
if f >= 10:
    count += int(f / 10)
    f %= 10
if f >= 5:
    count += int(f / 5)
    f %= 5
if f >= 1:
    count += int(f)
print(count)

