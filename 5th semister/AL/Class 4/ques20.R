v1<-c()
for(i in 1:20){
    v1[i]=i*(i+1)/2
}
v2<-v1
r=c(LETTERS[1:20])
names(v1)<-r
for (i in 1:20){
    if(names(v1[i])=="A"||names(v1[i])=="E"||names(v1[i])=="I"||names(v1[i])=="O"||names(v1[i])=="U"){
        print(v2[i])
    }
}
