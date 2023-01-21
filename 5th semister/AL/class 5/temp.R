x <- data.frame(
emp_id = c (1:5),
emp_name = c("Rick","Dan","Michelle","Ryan","Gary"),
salary = c(623.3,515.2,611.0,729.0,843.25),
start_date = as.Date(c("2012-01-01", "2013-09-23", "2014-11-15", "2014-05-
11", "2015-03-27")),
stringsAsFactors = FALSE
)
x1 <- data.frame("SN" = 1:2, "Age" = c(21,15), "Name" = c("John","Dora"))
r<-  data.frame(x$emp_name,x$salary)

subset(x, subset = salary > 600)
print((r))

x3<-c(
"You should use double quotes most of the time",
'Single quotes are better for including inside " the string'
)
#print(x3)
#print(paste(x3,sep=" "))
print(paste(x3,collapse = ","))

result <- format("Hello", width = 8, justify = "")
print(result)
