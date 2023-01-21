data(women)

plot(women,type='o')

barplot(as.matrix(women))

hist(as.matrix(women))

pie(as.matrix(women))

dotchart(as.matrix(women))

boxplot(as.matrix(women))

input<- women[,c('height','weight')]
plot(x=input$height,y=input$weight)

den=density(as.matrix(women))
plot(den)
