setwd("C:/Users/priya/OneDrive/Documents/coding/5th semister/AL/Class 7") 
library("xlsx")
data1=read.xlsx("Student.xlsx",sheetIndex=1) 
data2=read.xlsx("Student.xlsx",sheetIndex=2) 
data=merge(data1,data2)
write.xlsx(data, file="C:/Users/priya/OneDrive/Documents/coding/5th semister/AL/Class 7/new_Student.xlsx", sheetName="Merged Values")
cat("New Excel file created.")
