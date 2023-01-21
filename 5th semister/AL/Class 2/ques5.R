print("Enter 3 digit Number: ")
n<-as.integer(readline())
num<-n
rev<-0
while(n>0){
  r = n%%10
  rev = (rev*10)
  rev = rev+r
  n = n%/%10
}
if(rev==num){
  print("Number is a Palindrome")
}else{
  print("Number is not a Palindrome")
}