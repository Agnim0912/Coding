a = as.integer(readline(prompt = "Enter the marks of Subject 1 : "))
b = as.integer(readline(prompt = "Enter the marks of Subject 2 : "))
c = as.integer(readline(prompt = "Enter the marks of Subject 3 : "))

avg = (a + b + c)/3
per = ((a+b+c)/300)*100

cat("\nAverage is : ", avg, "\n")

if (per >= 90 && per<=100)
{
  print ("You've scored 'O' grade")
  
}else if (per >=80 && per <= 89)
  
{
  print ("You've scored 'E' grade")
  
}else if (per >=70 && per <= 79)
  
{
 print ("You've scored 'A' grade")
  
}else if (per >=60 && per <= 69)
  
{
  print ("You've scored 'B' grade")
  
}else if (per >=50 && per <=59)
{
  print ("You've scored 'C' grade")
}