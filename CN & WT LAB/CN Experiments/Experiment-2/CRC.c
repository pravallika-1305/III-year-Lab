#include <stdio.h>
#include <string.h>
 int main() {
	int i,j,coefflen,msglen,mlen;
	char input[100],data1[100],coeff[30],temp[30],quot[100],rem[30],rem1[30],coeff1[30],Q[30],R[30];
	printf("Enter Data: ");
	scanf("%s",input);
	strcpy(data1,input);
	printf("Enter Polynomial Coefficient: ");
	scanf("%s",coeff);
	coefflen = strlen(coeff);
	msglen = strlen(input);
	strcpy(coeff1,coeff);
//adding zeroes
	for (i = 0; i < coefflen - 1; i++) {
		input[msglen + i] = '0';
	}
//XOR DIVISION
	for (i = 0; i < coefflen; i++)
		 temp[i] = input[i];
	
    for (i = 0; i < msglen; i++) {
		quot[i] = temp[0];
		if(quot[i] == '0')
		 for (j = 0; j < coefflen; j++)
		 coeff[j] = '0';
		 else
		 for (j = 0; j < coefflen; j++)
		 coeff[j] = coeff1[j];
		for (j = coefflen - 1; j > 0; j--) {
			if(temp[j] == coeff[j])
			 rem[j - 1] = '0'; 
			else
			 rem[j - 1] = '1';
		}
		rem[coefflen - 1] = input[ i + coefflen];
		strcpy(temp,rem);
	}
	strcpy(rem,temp);
	printf("\nMessage is ");
	for (i = 0; i < msglen; i++)
	 printf("%c",quot[i]);
	printf("\nCRC is ");
	for (i = 0; i < coefflen - 1; i++)
	 printf("%c",rem[i]);
	printf("\nMessage on the receiver end: ");
	for (i = 0;i < msglen; i++)
	 printf("%c",input[i]);
	for (i = 0;i < coefflen - 1; i++)
	 printf("%c",rem[i]);
 printf("\n");

	strcat(data1,rem);
	printf("AT RECEIVER\n");
               
        for (i=0;i<strlen(data1) - 3;i++)
          printf("%c",data1[i]);
printf("\n");
        for (i=0;i<coefflen;i++)
         temp[i]=data1[i];
        for (i=0;i<msglen;i++) {
                Q[i]=temp[0];
                if(Q[i]=='0')
                 for (j=0;j<coefflen;j++)
                 coeff[j]='0'; 
                else
                 for (j=0;j<coefflen;j++)
                 coeff[j]=coeff1[j];
                for (j=coefflen-1;j>0;j--) {
                        if(temp[j]==coeff[j])
                         R[j-1]='0'; 
                        else
                         R[j-1]='1';
                }
                R[strlen(coeff)-1]=data1[i+strlen(coeff)];
                strcpy(temp,R);
        }
	 strcpy(R,temp);
	 int flag=0;
        for (int i=0;i<strlen(R) - 3;i++){
		if (R[i]!='0'){
		printf("%c\n",R[i]);
		   flag = 1;
		}
		else{
			continue;
		}
	}
       if (flag == 0){
	       printf("Data Received correctly\n");
       }else{
	       printf("Error in Receiving Data\n");
       }

    	return 0;

    }

