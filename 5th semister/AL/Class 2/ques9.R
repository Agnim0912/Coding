print("Enter limit for the series:")
var<-as.integer(readline())
n=1
list<-list()
while(n<var){
    list<-append(list,(n*n))
    n=n+1
}
print(list)