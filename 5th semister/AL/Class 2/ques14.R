num1 = as.integer(readline(prompt = "Enter the num for the series : "))


count = 1
num2 = 1
sum = 0

while (num2 <= num1){
  temp=count
  while(0<temp){
    sum = sum+temp
    temp = temp-1
  }
  count = num2+1
  num2 = num2 + 1
}
print(sum)