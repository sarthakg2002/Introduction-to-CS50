from cs50 import get_string
t = get_string("Text: ")
w = 0
l = 0
s = 0
for i in range(len(t)):
    if t[i] == ' ':
        w += 1
    elif t[i] in ['.','!','?']:
        s += 1
    elif t[i].isalpha():
        l += 1
if w > 0:
    w += 1
L = l / w * 100.00
S = s / w * 100.00
x = (0.0588 * L) - (0.296 * S) - 15.8
x = round(x)

if x < 1:
    print("Before Grade 1")
elif x >= 16:
    print("Grade 16+")
else :
    print("Grade ", end = "")
    print(x)