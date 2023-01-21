#include <stdio.h>
#include <stdlib.h> 

struct nodes 
{
int vertex; int edges;
int ** arr; // for creating 2-d arraay
};

void create_graph(struct nodes * temp, int x) 
{
    temp -> vertex = x; temp -> edges = 0;
    temp -> arr = (int ** ) malloc(temp -> vertex * sizeof(int * )); 
    for (int i = 0; i < temp -> vertex; i++) 
    {
        temp -> arr[i] = (int * ) malloc(temp -> vertex * sizeof(int)); 
        for (int j = 0; j < temp -> vertex; j++) 
        {
            temp -> arr[i][j] = 0;
        }
    }
}

void print_graph(struct nodes * t) 
{
    for (int i = 0; i < t -> vertex; i++) 
    { 
        for (int j = 0; j < t -> vertex; j++) 
        {
            printf("%d\t", t -> arr[i][j]);
        }
        printf("\n");
    }
}
void add_edge(struct nodes * t, int i, int j) 
{ 
    if (i > 5 || j > 5)
    {
        printf("You have entered an wrong edge\n"); 
    }
    else
    {
        t -> arr[i - 1][j - 1] = 1;
    }
}
int main() 
{
    struct nodes t; int v;
    printf("Enter the number of vertex present in the graph\n"); scanf("%d", & v);
    create_graph( & t, v); add_edge( & t, 1, 2);
    add_edge( & t, 1, 3);
    add_edge( & t, 1, 4);
    add_edge( & t, 2, 3);
    add_edge( & t, 3, 3);
    add_edge( & t, 4, 3); print_graph( & t); 
    return 0;
}
