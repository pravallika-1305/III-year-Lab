#include<stdio.h>
#include<string.h>


int main(){
int i,ch,j;
int snum[10];
char data[20][20];
int n;
printf("Enter the number of frames:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
if(i!=0)
{
printf("frame%d:",i);
scanf("%s", data[i]);
}
}
for(i=0;i<=n;i++){
snum[i] = strlen(data[i]) + 1;
}


printf("\nAT THE SENDER:\n");
printf("Data as frames:\n");
for(i=1;i<=n;i++)
{
printf("Frame%d:",i);
printf("%d",snum[i]);
printf("%s\n",data[i]);
}
printf("Data transmitted:");
for(i=1;i<=n;i++) {
printf("%d",snum[i]);
printf("%s", data[i]);
}

printf("\nAT THE RECEIVER\n");
printf("The data received.\n");
printf("\nThe data after removing count char:");
for(i=1;i<=n;i++)
printf("%s\t",data[i]);

printf("\nThe data in frame form:\n");
for(i=1;i<=n;i++)
{
printf("Frame%d:",i);
printf("%s\n",data[i]);
}
return 0;
}
