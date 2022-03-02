#include <stdio.h>
#include <string.h>
#include "AI_temp.h"

// Removes or cleans the dangling 'new line' character in stdin
void flush()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

// Removes or cleans the dangling 'new line' character in a char array
void clearNewLine(char *input)
{
	if(input[strlen(input)-1] == '\n')
	{
		input[strlen(input)-1] = '\0';
	}
}

//displays the strings from the MainMenuChoices char array list
void displayMainMenu()
{
	const int size = sizeof(MainMenuChoices) / sizeof(MainMenuChoices[0]);
	for(int i = size - 1; i >= 0; i--)
	{
		printf("[%d] %s\n", i, MainMenuChoices[(size-1) - i]);
	}
	scanf("%d", &mainMenuChoice);
	flush();
	system("cls");
}

//displays the strings from the FirstSectionChoices char array list
int displayFirstSectionHelp()
{
	const int size = sizeof(FirstSectionChoices) / sizeof(FirstSectionChoices[0]);
	const int questionsSize = sizeof(AIQuestions) / sizeof(AIQuestions[0]);
	printf("%s:\n", AIQuestions[questionsSize - 1]);
	for(int i = size - 1; i >= 0; i--)
	{
		printf("[%d] %s\n", i, FirstSectionChoices[(size-1) - i]);
	}
	
	int choice = 0;
	scanf("%d", &choice);
	flush();
	system("cls");
	
	if(choice < 0 || choice > size - 1)
		return 1;
	
	
	if(choice == 0)
		return 0;
	
	//delivers the provide help message to the user based from its requested help response / choice
	printf("%s\n", FirstSectionAnswers[(size - 1) - choice]);
	printf("\nPress Enter to continue.");
	flush();
	return 1;
}

//displays the strings from the SecondSectionChoices char array list
int displaySecondSectionHelp()
{
	const int size = sizeof(SecondSectionChoices) / sizeof(SecondSectionChoices[0]);
	const int questionsSize = sizeof(AIQuestions) / sizeof(AIQuestions[0]);
	printf("%s:\n", AIQuestions[questionsSize - 1]);
	for(int i = size - 1; i >= 0; i--)
	{
		printf("[%d] %s\n", i, SecondSectionChoices[(size-1) - i]);
	}
	
	int choice = 0;
	scanf("%d", &choice);
	flush();
	system("cls");
	
	if(choice < 0 || choice >  size - 1)
		return 1;
	
	if(choice == 0)
		return 0;
	
	//delivers the provide help message to the user based from its requested help response / choice
	printf("%s\n", SecondSectionAnswers[(size - 1) - choice]);
	printf("\nPress Enter to continue.");
	flush();
	return 1;
}

//displays the strings from the ThirdSectionChoices char array list
int displayThirdSectionHelp()
{
	const int size = sizeof(ThirdSectionChoices) / sizeof(ThirdSectionChoices[0]);
	const int questionsSize = sizeof(AIQuestions) / sizeof(AIQuestions[0]);
	printf("%s:\n", AIQuestions[questionsSize - 1]);
	for(int i = size - 1; i >= 0; i--)
	{
		printf("[%d] %s\n", i, ThirdSectionChoices[(size-1) - i]);
	}
	
	int choice = 0;
	scanf("%d", &choice);
	flush();
	system("cls");
	
	if(choice < 0 || choice >  size - 1)
		return 1;
	
	if(choice == 0)
		return 0;
	
	//delivers the provide help message to the user based from its requested help response / choice
	printf("%s\n", ThirdSectionAnswers[(size - 1) - choice]);
	printf("\nPress Enter to continue.");
	flush();
	system("cls");
	return 1;
}

//displays the strings from the FourthSectionChoices char array list
int displayFourthSectionHelp()
{
	const int size = sizeof(FourthSectionChoices) / sizeof(FourthSectionChoices[0]);
	const int questionsSize = sizeof(AIQuestions) / sizeof(AIQuestions[0]);
	printf("%s:\n", AIQuestions[questionsSize - 1]);
	for(int i = size - 1; i >= 0; i--)
	{
		printf("[%d] %s\n", i, FourthSectionChoices[(size-1) - i]);
	}
	
	int choice = 0;
	scanf("%d", &choice);
	flush();
	system("cls");
	
	if(choice < 0 || choice >  size - 1)
		return 1;
	
	if(choice == 0)
		return 0;
	
	//delivers the provide help message to the user based from its requested help response / choice
	printf("%s\n", FourthSectionAnswers[(size - 1) - choice]);
	printf("\nPress Enter to continue.");
	flush();
	system("cls");
	return 1;
}

