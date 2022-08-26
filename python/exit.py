import sys

if len(sys.argv) != 2:
    print("Missing CLI argument")
    exit(1)

print(f"hello, {sys.argv[1]}")
sys.exit(0)