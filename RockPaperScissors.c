#include<stdio.h>
#include<time.h>

int generateRandomNumber(int n)
{
	srand(time(NULL));
	return rand()%n;
}

int greater(char char1, char char2)
{
	if(char1 == char2)
	{
		return -1;
	}
	else if((char1 =='r')&& (char2=='s'))
	{
		return 1;
	}
	else if ((char2 =='r')&& (char1=='s')){
		return 0;
	}
	else if((char1 =='p')&& (char2=='r'))
	{
		return 1;
	}
	else if ((char2 =='p')&& (char1=='r')){
		return 0;
	}
	else if((char1 =='s')&& (char2=='p'))
	{
		return 1;
	}
	else if((char2 =='s')&& (char1=='p'))
	{
		return 0;
	}
}
int main()
{
	int playerScore=0,compScore=0,temp,i;
	char playerChar,compChar;
	char arr[]={'r','p','s'};
	printf("\n\t\t************ Welcome to Rock, Paper, Scissors. ***************\n\t'");
	for(i=0;i<3;i++)
	{
		//Player input
		printf("\n\t\tPlayer 1's Turn: ");;
		printf("\n\t\t1-Choose 1 for Rock \n\t\t2-Choose 2 for Paper \n\t\t3-Choose 3 for Scissors ");
		scanf("\n\t\t%d",&temp);
		getchar();
		playerChar = arr[temp-1];
		printf("\n\t\tYou Chose %c",playerChar);
		
		//Computer input
		printf("\n\n\t\tComputer's Turn: ");;
		printf("\t\t\n1-Choose 1 for Rock \n2-Choose 2 for Paper \n3-Choose 3 for Scissors ");
		
		temp = generateRandomNumber(3) + 1;
		compChar= arr[temp-1];
		printf("\t\t\nCPU Chose %c\n",compChar);
		
		if(greater(playerChar,compChar) == 1)
		{
			compScore +=1;
			printf("\n\t\tCPU Got It!!\n");
		}
		else if(greater(playerChar,compChar) == -1)
		{
			compScore+=1;
			playerScore +=1;
			printf("\n\t\tIt's a Draw!!\n");
		}
		else{
			playerScore +=1;
			printf("\n\t\tYou Got It!!\n");
		}
		printf("\n\t\tYou: %d",playerScore);
		printf("\n\t\tCPU: %d",compScore);
	}
	if(playerScore > compScore)
	{
		printf("\n\t\t You win the game ");
	}
	else if(playerScore > compScore)
	
	{
		printf("\n\t\t CPU win the game ");
		
	}
	else{
		printf(" \n\t\t It's a Draw ");
	}
	return 0;
}
