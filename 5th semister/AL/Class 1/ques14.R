salary<-readline("enter num: ")
salary<- as.integer(salary)

d<-((40/100)*salary)
h<-((20/100)*salary)
cat("Gross Salary: ",salary+d+h)

