fact<-function(x){
    if(x==0){
        return(1)
    }else{
        return(x*fact(x-1))
    }
}
x<-as.integer(readline(prompt = "Enter the number: "))
cat("Factorial: ",fact(x))