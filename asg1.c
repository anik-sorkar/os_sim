#include<stdio.h>
int main()
{
        int i,n,t[10],time[10] ;
        printf("No. process: ");
        scanf("%d",&n);
        i=0;
        while(i<n)

        {
                printf("Service time for P%d : ",i);
                scanf("%d",&time[i]);
                if(time[i]<5000)
                {
                        t[i]=1;
                }
                else
                {
                        t[i]=0;
                }
                i++;
        }
        printf("No.Process\tService Time\t         Priority\tType");
        i=0;
        while(i<n)
        {
                printf("\nP%d\t\t%dms \t\t\t",i,time[i]);
                if(t[i]==1)
                {
                        printf("High \t\t Interactive");
                }
                else
                {
                        printf("Low \t\t Non-Interactive");
                } 
                i++;

        }
}

