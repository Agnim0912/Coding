v<-readline("enter num1: ")
v<- as.integer(v)

v2<-v%%100
v3<-(v-v2)
cat("Rupees: ",v3/100)
cat("Paise: ",v2)

