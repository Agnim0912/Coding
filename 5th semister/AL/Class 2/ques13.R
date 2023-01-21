num<-as.integer(readline(prompt = "Enter a number:"))
sum<-0
count<-0
list<-list(0)
for(i in (1:num)){
    if((num%%i)==0){
        list<-append(list,i)
        count<-(count+1)
    }
}
for(j in (1:count)){
    sum<-sum+as.integer((list[j]))
}
if(sum==num){
    print("It is a perfect number")
}else{
    print("Not a perfect number")
}