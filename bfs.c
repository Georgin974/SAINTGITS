 #include<stdio.h>
#include<stdlib.h>
int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1,v=0;
void bfs(int);
void main()
{
    printf("enter the number of vertex:");
    scanf("%d",&n);
    printf("enter the adjacency matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d\t",&a[i][j]);
        }

    }
    printf("\n enter the value of starting vertex:\n");
    scanf("%d",&v);
    for(i=0;i<n;i++)
    {
        q[i]=0;
        visited[i]=0;
    }
    bfs(v);
    printf("the reachable node are:");
    for(i=0;i<n;i++)
    {
        if(visited[i])
        {
            printf("%d ",i);
        }
    }
}
void bfs(int v)
{
    for(i=0;i<n;i++)
    {
        if(a[v][i] && !visited[i])
        {
            q[++r]=i;
        }
        if(f<=r)
        {
            visited[q[f]]=1;
            bfs(q[++f]);
        }
    }
}
