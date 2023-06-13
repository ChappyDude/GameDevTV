import csv

from cs50 import SQL

db = SQL("sqlite:///favorites.db")

title = input("Title: ").strip()

rows = db.execute("SELECT COUNT(*) AS counter FROM favorites WHERE title LIKE ?", title)  # ? here acts same as %s in C language

row = rows[0]

print(row["counter"])   # In line 9 saving COUNT(*) AS counter, so can use that name here to make easier to read
