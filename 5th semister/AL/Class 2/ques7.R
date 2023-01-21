print("Enter your choice: ")
y<-as.integer(readline())

x = switch(
y,
"1"={
    print("Enter radius:")
    r<-as.integer(readline())
    cat("Area of Circle: ",(22/7)*r*r)
    },
"2"={
    print("Enter Length and Breath:")
    l<-as.integer(readline())
    b<-as.integer(readline())
    cat("Area of Rectangle: ",l*b)
    },
"3"={
    print("Enter Length and Breath:")
    b<-as.integer(readline())
    h<-as.integer(readline())
    cat("Area of Triangle: ",(1/2)*b*h)
    },
)

print (x)