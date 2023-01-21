num=as.integer(readline(prompt = "Enter the value of N:-"))
x=1
y=0
while(num>0){
  if(y%%2==0){
    even=1:x
    for (i in even){
      cat(i," ")
    }
  }else{
    odd=x:1
    for (i in odd){
      cat(i," ")
    }
  }
  cat("\n")
  num=num-1
  x=x+1
  y=y+1
}