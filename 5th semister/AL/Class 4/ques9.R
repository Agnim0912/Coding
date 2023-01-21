l <- list(c(1,3,2,6,9), matrix(c(34,-12,67,65), nrow = 2), list("green",12.3))
names(l) <- c("Vector", "Matrix", "List")
print(l$List[2])