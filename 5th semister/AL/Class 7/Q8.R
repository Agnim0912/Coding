setwd("C:/Users/priya/OneDrive/Documents/coding/5th semister/AL/Class 7") 
library("xlsx")
data1=read.xlsx("Student.xlsx",sheetIndex=1) 
data2=read.xlsx("Student.xlsx",sheetIndex=2) 
data=merge(data1,data2)
cat("\nMerged data set:\n")
 
print(data)
