#include<stdio.h>
int main()
{
        int i,n,t[10],rt[10] ;
        printf("Number of process: ");
        scanf("%d",&n);
        printf("Enter the data\n");
        i=0;
        while(i<n)

        {
                printf("Response time of P%d : ",i);
                scanf("%d",&rt[i]);
                if(rt[i]<1000)
                {
                        t[i]=1;
                }
                else
                {
                        t[i]=0;
                }
                i++;
        }
        printf("No.Process \t Response Time \t Type \t \t Priority");
        i=0;
        while(i<n)
        {
                printf("\nP%d \t \t %dms \t \t",i,rt[i]);
                if(t[i]==1)
                {
                        printf("Interactive \t High");
                }
                else
                {
                        printf("Non-Interactive \t Low");
                } 
                i++;

        }
}

