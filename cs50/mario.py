from multiprocessing.sharedctypes import Value


def main():
    height, width = get_height()
    for i in range(height):
        for j in range(width):
            print("#", end="")
        print()

def get_height():
    while True:
        try:
            h = int(input("Height: "))
            w = int(input("Width: "))
            if h > 0 or w > 0:
                break
        except ValueError:
            print("That's not an integer")
    return h, w
main()