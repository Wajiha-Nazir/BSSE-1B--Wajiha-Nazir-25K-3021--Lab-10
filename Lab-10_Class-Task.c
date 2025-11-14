#include<stdio.h>
#include<string.h>

int main()
{
	int i, j;
	char word[4][10]={"Apple","Grapes","Kiwi","Orange"};
	char fruit[6]="Mango";
	for(i=0;i<4;i++)
	{
		if(i==1){
			strcpy(word[1],fruit);
		}
		printf("%s\n",word[i]);
		printf("length is %d\n",strlen(word[i]));
	}
	printf("\n\n");
	for(i=0;i<4;i++)
	{
		printf("%s\n",word[i]);
		for(j=0;word[i][j]!='\0';j++)
		{
			printf("%c\n",word[i][j]);
		}
	}
	return 0;
}
