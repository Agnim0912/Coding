fact<-function(x){
    n=1
    out=1
    for(n in n:var){
        out = out*n
        n=n+1
    }
    cat("Factorial of Number:",out)
}


print("Enter factorial no:")
var<-as.integer(readline())
fact(var)