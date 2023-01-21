recur<-function(num,rev,factor){
    if(num==0){
        return(rev)
    }else{
        rev=rev+(num%%2)*factor
        factor=factor*10
        return(recur(num%/%2,rev,factor))

    }
}

rev=0
num<-as.integer(readline(prompt = "Enter number: "))
cat("Binary: ",recur(num,rev,1))
