recur<-function(num,rev){
    if(num==0){
        return(rev)
    }else{
        rev=rev*10+num%%10
        return(recur(num%/%10,rev))
    }
}

rev=0
num<-as.integer(readline(prompt = "Enter number: "))
cat("Reverse: ",recur(num,rev))
