library(ggplot2)
install.packages(dplyr)
install.packages(gapminder)
library(dplyr)
library(gapminder)
data<- gapminder%>%filter(year==2007)%>%dplyr::select(year)
ggplot(data, aes(x=gdppercap, y=lifeExp, size=pop))+
    geom_point(alpha=0.7)

