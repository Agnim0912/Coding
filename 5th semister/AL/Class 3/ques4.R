series<-function(x){
    if(x==0){
        return(0)
    }else{
        return(x+series(x-1))
    }
}
x<-as.integer(readline(prompt = "Enter the number: "))
cat("Sum of the series: ",series(x))