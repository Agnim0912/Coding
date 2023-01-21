l <- list(c(1,3,2,6,9), matrix(c(34,-12,67,86), nrow = 2), list("green",12.3))
names(l) <- c("Vector", "Matrix", "List")
v2<-c(1)
l<- append(l,v2)
l[2]<-NULL
print(l)