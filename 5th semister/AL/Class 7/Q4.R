setwd("C:/Users/priya/OneDrive/Documents/coding/5th semister/AL/Class 7") 

data=read.csv("Student.csv")
cat("CSE students having percentage >= 80:\n") 
print(subset(data,branch=="CSE" & percentage>=80))
