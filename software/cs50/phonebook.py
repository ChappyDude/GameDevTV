# Dictionary / Hash table of people and their number
# people = {
#     "Carter": "111",
#     "David": "222"
# }

# name = input("Name: ")
# if name in people:
#     print(f"Number: {people[name]}")

#####################################

import csv

name = input("Names: ")
number = int(input("Number: "))

with open("phonebook.csv", "a") as file:    # Use with keyword, so don't habe to managed open and close

    writer = csv.writer(file)
    writer.writerow([name, number])

file.close()