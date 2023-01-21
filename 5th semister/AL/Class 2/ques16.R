n<-as.integer(readline(prompt = "Enter the number : "))
num<-n
sum<-0

while(n>0){
  r = n%%10
  sum = sum + (r*r*r)
  n = n%/%10
}
if(num==sum){
    cat(num,"is an amstrong number.")
}else{
    cat(num,"is not an amstrong number.")
}