#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main()
{
	int sec=0,min=0,hour=0;
	char ch;
	printf("________PRESS ANY KEY TO TO START THE CLOCK________\n");
	ch = getch();
	if(ch)
	{
		goto clock;
	}
	clock:
	system("cls");
	while(!kbhit())
	{
		printf("________PRESS ANY KEY TO STOP________\n");
		printf("======================================\n");
		sec++;
		if(sec>=60)
		{
			sec=0;
			min++;
		}
		if(min>=60)
		{
			min=0;
			hour++;
		}
		printf("CLOCK: %02d:%02d:%02d",hour,min,sec);
		Sleep(1000);
		system("cls");
	}
	ch = getch();
	system("cls");
	printf("\nTIMER STOPPED!!\n");
	printf("TIME: %02d:%02d:%02d",hour,min,sec);
	printf("\n________PRESS R TO RESTART________");
	printf("\n________PRESS S TO START NEW TIMER________");
	printf("\n________PRESS X TO EXIT________\n");
	clock2:
	ch = getch();
	if(ch=='r'||ch=='R')
		goto clock;	
	else if(ch=='s'||ch=='S')
		{
			sec=0;
			min=0;
			hour=0;
			goto clock;
		}
	else if(ch=='x'||ch=='X')
	{
		system("cls");
		printf("\n________CLOCK STOPPED________\n");
		exit(0);
	}
		
	else
	{
		printf("WRONG CHOICE! TRY AGAIN");
		goto clock2;
	}		
}

