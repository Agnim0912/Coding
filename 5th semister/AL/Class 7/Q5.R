setwd("C:/Users/priya/OneDrive/Documents/coding/5th semister/AL/Class 7") 
data=read.csv("Student.csv")
cat("students admitted on or after 1st may 2017:\n") 
print(subset(data,as.Date(DOA)>as.Date("2017-05-01")))
