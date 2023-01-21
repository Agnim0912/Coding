print("Enter Number: ")
n<-as.integer(readline())
num<-n
rev<-0
while(n>0){
  r = n%%10
  rev = (rev*10)
  rev = rev+r
  n = n%/%10
}
print(rev)