def main():
    # This reads an integer from console input (assumes input is correctly formatted)
    x = int(input())

    # This adds 5 to x if x is divisible by 3 and x is positive
    if x % 3 == 0 and x > 0:
        x += 5

    # This prints x to the console
    print(x)

# This calls the main function to run the program
if __name__ == "__main__":
    main()