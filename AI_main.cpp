#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include "AI_temp.cpp"

int Questionings(int index, Respondents* respo);

int main()
{
	const int questionsSize = sizeof(AIQuestions) / sizeof(AIQuestions[0]);
	int willContinue = 0;
	int IsCompatible = 1;
	
	Respondents* respo = (Respondents*)malloc(sizeof(Respondents));

	for(int i = 0; i < questionsSize - 1;)
	{
		if(
		(respo->IsFromMetroManila != 1 && i == 3) ||
		(respo->isTakingOnlineClass != 1 && i == 4) ||
		(respo->rate < 6 && i == 5)
		)
		{
			IsCompatible = 0;
			break;
		}
		
		printf("%s: %s\n", AIName, AIQuestions[i]);
		willContinue = Questionings(i, respo);
		system("cls");
		
		if(willContinue == 1)
		{
			willContinue = 0;
			continue;
		}
		i++;
	}
	
	if(IsCompatible == 1)
	{
		FILE* file;
		file=fopen("Database.txt", "a");
		if(file==NULL) 
		{
    		perror("Error opening file.");
		}
		else
		{
			fprintf(file, "Name: %s| YearLevel: %d| IsFromMetroManila: %d| IsTakingOnlineClass: %d| Stress Rate: %d| DoesThisProgramHelp: %d|\n",
			respo->username, respo->userYear, respo->IsFromMetroManila, respo->isTakingOnlineClass, respo->rate, respo->doesItHelp);
			fclose(file);
		}
	}
	
	printf("Thank You!");
	
	return 0;
}

int Questionings(int index, Respondents* respo)
{
	switch(index)
	{
		case 0:
			{
				fgets(respo->username, sizeof(respo->username), stdin);
				clearNewLine(respo->username);
				sprintf(AIQuestions[1], "Hi %s. What year are you in college?", respo->username);
				sprintf(AIQuestions[7], "Here are a few things that you can do, %s. Enter the number of your choice", respo->username);
				return 0;
				break;
			}
		case 1:
			{
				scanf("%d", &respo->userYear);
				flush();
				if(respo->userYear < 1 || respo->userYear > 5)
					return 1;
				return 0;
				break;
			}
		case 2:
			{
				printf("[1] Yes\n");
				printf("[0] No\n");
				scanf("%d", &respo->IsFromMetroManila);
				flush();
				if(respo->IsFromMetroManila < 0 || respo->IsFromMetroManila > 1)
					return 1;
				return 0;
				break;
			}
		case 3:
			{
				printf("[1] Yes\n");
				printf("[0] No\n");
				scanf("%d", &respo->isTakingOnlineClass);
				flush();
				if(respo->isTakingOnlineClass < 0 || respo->isTakingOnlineClass > 1)
					return 1;
				return 0;
				break;
			}
		case 4:
			{
				scanf("%d", &respo->rate);
				flush();
				if(respo->rate < 1 || respo->rate > 10)
					return 1;
				return 0;
				break;
			}
		case 5:
			{
				const int size = sizeof(MainMenuChoices) / sizeof(MainMenuChoices[0]);
				displayMainMenu();
				if(mainMenuChoice < 0 || mainMenuChoice > size)
					return 1;
				if(mainMenuChoice >= 4 && mainMenuChoice <= 6)
				{
					while(displayFirstSectionHelp() == 1)
					{
						system("cls");
					}
					return 1;
				}
				else if(mainMenuChoice == 3)
				{
					while(displaySecondSectionHelp() == 1)
					{
						system("cls");
					}
					return 1;
				}
				else if(mainMenuChoice == 2)
				{
					while(displayThirdSectionHelp() == 1);
					{
						system("cls");
					}
					return 1;
				}
				else if(mainMenuChoice == 1)
				{
					while(displayFourthSectionHelp() == 1)
					{
						system("cls");
					}
					return 1;
				}
				return 0;
				break;
			}
		case 6:
			{
				printf("[1] Yes\n");
				printf("[0] No\n");
				scanf("%d", &respo->doesItHelp);
				flush();
				system("cls");
				if(respo->doesItHelp < 0 || respo->doesItHelp > 1)
					return 1;
				if(respond == 0)
				{	
					printf("%s\n", NeedHelp);
					printf("\nPress Enter to continue.");
					flush();
				}
				return 0;
				break;
			}
	}
}

