x<-as.integer(readline("Enter a Number: "))
y<- x*2+1
u1=seq.int(x,0,-1)
u2=seq.int(1,x,1)
u3=c(u1,u2)
u=diag(u3,y,y)
for(i in 1:y){
    if(i<y){
        u[i,i+1]=1
        u[i+1,i]=1
    }
}
print(u)