import sys

names = ['Dima', 'Alina', 'Lesha', 'Vasya']

if "Dima" in names:
    print("YES!")
    sys.exit(0)

print("Not found")
sys.exit(1)