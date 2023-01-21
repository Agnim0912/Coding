#include <stdio.h>
#define S 4
#define INF 99999

void printgraph(int dist[][S]);
void graphfunc(int graph[][S])
{
  int dist[S][S], i, j, k;
  for (i = 0; i < S; i++)
  for (j = 0; j < S; j++)
   dist[i][j] = graph[i][j];
     for (k = 0; k < S; k++)
    {
       for (i = 0; i < S; i++)
        {
            for (j = 0; j < S; j++)
            {
              if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
     printgraph(dist);
}
void printgraph(int dist[][S])
{
    printf ("The following matrix shows the shortest distances"
            " between eSery pair of Sertices \n");
    for (int i = 0; i < S; i++)
    {
        for (int j = 0; j < S; j++)
        {
            if (dist[i][j] == INF)
                printf("%7s", "INF");
            else
                printf ("%7d", dist[i][j]);
        }
        printf("\n");
    }
}
int main()
{
   int graph[S][S] = { {0,   5,  INF, 10},
                        {INF, 0,   3, INF},
                        {INF, INF, 0,   1},
                        {INF, INF, INF, 0}
                      };
  
    graphfunc(graph);
    return 0;
}