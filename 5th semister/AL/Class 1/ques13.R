m<-readline("enter num: ")
m<- as.integer(m)

h<-(m%/%100)
f<-(m -(100*h))%/%50
t<-(m -(100*h)-(f*50))
cat("Hundred: ",h)
cat("Fifty: ",f)
cat("Ten: ",t%/%10)
