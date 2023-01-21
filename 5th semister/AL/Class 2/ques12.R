num<-as.integer(readline(prompt = "Enter a number: "))
p<-0
i<-0
for(i in 2:(num-1)){
    if((num%%i)==0){
        p<-0
        break
    }else{
        p<-1
    }
}
if(p==1){
    print("It is a Prime Number")
}else{
    print("Not a Prime Number")
}