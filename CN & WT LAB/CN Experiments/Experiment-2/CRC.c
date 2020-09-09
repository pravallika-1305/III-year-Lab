#include <stdio.h>
#include <string.h>
 int main() {
	int i,j,coefflen,msglen;
	char input[100], coeff[30],temp[30],quot[100],rem[30],coeff1[30];
	printf("Enter Data: ");
	scanf("%s",input);
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
	printf("\nMesage is ");
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
	return 0;
}
