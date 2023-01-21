HCF<-function(x,y){
    if(x > y) {
        smaller = y
    } else {
        smaller = x
    }
    for(i in 1:smaller) {
        if((x %% i == 0) && (y %% i == 0)) {
            hcf = i
        }
    }
    cat("HCF is: ", hcf)
}

LCM<-function(x,y){
    if(x > y) {
        greater = x
    } else {
        greater = y
    }
    while(TRUE) {
        if((greater %% x == 0) && (greater %% y == 0)) {
            lcm = greater
            break
        }
        greater = greater + 1
    }
    cat("\nLCM is:", lcm)
}

print("Enter 2 numbers: ")
x<-as.integer(readline())
y<-as.integer(readline())

HCF(x,y)
LCM(x,y)