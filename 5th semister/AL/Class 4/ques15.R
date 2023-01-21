m2<-matrix(c(1,2,3,4,4,4,4,4,4,4,4,4),nrow=4,ncol=3)
row=1
while(row <= (nrow(m2))) {
    col=1
    while(col <= (ncol(m2))){
        if(m2[row,col]<5){
            m2[row,col]<-0
        }
        col=col+1
    }
    row=row+1
}
print(m2)