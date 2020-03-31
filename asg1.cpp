#include<iostream>
using namespace std;
int main()
{
int i,n,t[10],rt[10];
cout<<"Number of process: ";
cin>>n;
cout<<"Enter the data\n";
for(i=0;i<n;i++)
{
cout<<"Response time of P"<<i<<": ";
cin>>rt[i];
if(rt[i]<1000)
{
t[i]=1;
}
else
{
t[i]=0;
}
}
cout<<"No. Process"<<'\t'<<"Response Time"<<'\t'<<"Type"<<'\t'<<'\t'<<"Priority";
for(i=0;i<n;i++)
{
cout<<"\nP"<<i<<'\t'<<'\t'<<rt[i]<<" ms"<<'\t'<<'\t';
if(t[i]==1)
{
cout<<"Interactive"<<'\t'<<"High ";
}
else
{
cout<<"Non-Interactive"<<'\t'<<"Low ";
}
}
return 0;
}
