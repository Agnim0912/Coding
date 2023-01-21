print("Enter Marks Obtained in 5 Subjects: ")
markOne = int(input())
markTwo = int(input())
markThree = int(input())
markFour = int(input())
markFive = int(input())

tot = markOne+markTwo+markThree+markFour+markFive
avg = tot/5

if avg>=91 and avg<=100:
    print("Your Grade is A")
if avg>=81 and avg<91:
    print("Your Grade is B")
if avg>=71 and avg<81:
    print("Your Grade is C")
if avg>=61 and avg<71:
    print("Your Grade is D")
if avg>=51 and avg<61:
    print("Your Grade is E")