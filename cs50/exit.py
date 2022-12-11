import sys

if len(sys.argv) != 2:
    print("Missing commmand-line argument")
    sys.exit(1) # Exit failure

print(f"hello, {sys.argv[1]}")
sys.exit(0) # Exit success