cal<-function(a,b,c,d,e){
    sum<-a+b+c+d+e
    cat("Sum: ",sum)
    mean=(sum/5)
    cat("\nMean: ",mean)
    dev=sqrt(((a-mean)^2+(b-mean)^2+(c-mean)^2+(d-mean)^2+(e-mean)^2)/5)
    cat("\nStandard Deviation: ",dev)
}

cal(9,2,5,4,12)