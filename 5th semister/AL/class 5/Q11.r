x <- c("male","female","male","male","female")
print(x)
if(is.factor(x)){
  print("X ix factor")
  }else{
    print("X is not a factor")
      x <- factor(x)
  }
print(x)