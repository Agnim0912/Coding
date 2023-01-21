m<-readline("enter num: ")
m<- as.integer(m)

km<-(m%/%1000)
ms<-(m -(1000*km))
cat("Kilometers: ",km)
cat("Meters: ",ms)
