var.1<-readline("enter P: ")
var.1<-as.integer(var.1)

var.2<-readline("enter R: ")
var.2<-as.integer(var.2)

var.3<-readline("enter T: ")
var.3<-as.integer(var.3)

print(var.1*(1+(var.2/100))^var.3)
