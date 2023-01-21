average<-function(x,y,z){
    sum=(x+y+z)/3
    cat("Average of 3 numbers: ", sum)
}

print("Enter 3 numbers: ")
x<-as.integer(readline())
y<-as.integer(readline())
z<-as.integer(readline())

average(x,y,z)