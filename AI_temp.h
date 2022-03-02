#ifndef AI_temp_h
#define AI_temp_h
#include <string.h>

typedef struct{
	char username[21];
	int userYear;
	int IsFromMetroManila;
	int isTakingOnlineClass;
	int rate;
	int doesItHelp;
} Respondents;

void flush();
void clearNewLine(char *input);

char AIName[20] = "AI";
int respond = 0;
int mainMenuChoice = 0;

void displayMainMenu();
int displayFirstSectionHelp();
int displaySecondSectionHelp();
int displayThirdSectionHelp();
int displayFourthSectionHelp();

char AIQuestions[8][1000] = {
"Kindly state your name.",
"Hi <name>. What year are you in college?",
"Are you currently located in Metro Manila?",
"Are you currently taking online classes?",
"How would you rate your stress level from a scale of 1 to 10",
"What would you say are the reasons that you are experiencing stress?",
"Did the program help you in handling your problems?",
"Here are a few things that you can do, Name. Enter the number of your choice"
};

char MainMenuChoices[7][100] = {
"Overwhelming Deadlines",
"Insufficient learning materials",
"Not understanding the lecture",
"Unstable daily internet connection",
"Home environment",
"COVID-19 related stress (includes mental and emotional stress such as anxiety)",
"End program"
};

char FirstSectionChoices[5][100] = {
"Plan and prepare for your classes",
"Reach out to professors for help whenever necessary.",
"Take breaks at regular intervals",
"Prioritise your mental health",
"Back to main menu"
};

char SecondSectionChoices[3][100] = {
"Plan and prepare for your classes",
"Reach out to professors for help whenever necessary",
"Back to main menu"
};

char ThirdSectionChoices[3][100] = {
"Talk to Friends and Family",
"Find a safe place outside to work",
"Back to main menu"
};

char FourthSectionChoices[4][100] = {
"Make time to unwind",
"Take care of your body",
"Connect with others",
"Back to main menu"
};

char NeedHelp[1000] = "Kindly visit this site for further help:\n"
"https://www.who.int/philippines/emergencies/covid-19-response-in-the-philippines/information/mental-health\n"
"You may also call:\n"
"0966 351 4518\n"
"0917 899 8727\n"
"0908 639 2672\n";

char FirstSectionAnswers[4][1000] = {
"Taking online classes rather than the formal face-to-face classes is a completely\n"
"different experience. Since there is no change in atmosphere from where you live\n"
"to where you study, it is hard for you to feel the motivation to keep track of\n"
"what is happening in class. Name, what you have to do is to attend classes\n"
"regularly and always be aware of the things that you have to pass for every subject.",

"Reaching out to your professors is a good thing. It is not embarrassing to message\n"
"a professor online, since this is the only formal way for you to ask class related\n"
"questions. It is better to overcome the embarrassment rather than to get a low\n"
"grade or even fail a class.",
	
"Making time management as one of your main studying skills will make a big impact\n"
"on trying to stay intact in school. When you manage your daily exercise, leisure\n"
"time, rest, and studying, the online school life would become a lot less stressful\n" 
"for you. Spending a very long time looking at your laptops to study and to attend\n"
"classes will bring a ton of stress, especially to your eyes. When you have a daily\n"
"schedule, you will not feel like you are procrastinating but rather, you will feel\n"
"satisfied resting because you did your work already.",

"Make sure that whenever you look at the social media and see the devastating news\n"
"or the posts that your friends post online, you do not stress out too much on\n"
"being at your own house doing nothing. It is completely difficult to feel stagnant\n"
"while the rest of the people in your environment are moving, but the acceptance of\n"
"knowing that you cannot control what is happening is important."
};

char SecondSectionAnswers[2][1000] = {
"Taking online classes rather than the formal face-to-face classes is a completely\n"
"different experience. Since there is no change in atmosphere from where you live\n"
"to where you study, it is hard for you to feel the motivation to keep track of\n"
"what is happening in class. Name, what you have to do is to attend classes\n"
"regularly and always be aware of the things that you have to pass for every\n"
"subject. If taking regular classes is difficult for you due to internet problems,\n"
"then you have to schedule a different time for you to watch the lectures that are\n"
"given in your class.",

"Reaching out to your professors is a good thing. It is not embarrassing to message\n"
"a professor online, since this is the only formal way for you to ask class related\n"
"questions. Asking for an extension of deadlines as well is okay, because most of\n"
"your professors will understand the struggle of not being able to connect to your\n"
"classes because of the poor connection."
};

char ThirdSectionAnswers[2][1000] = {
"Talking to your long-time friends or your short-term college friends is something\n"
"that is hard for us to do, especially when you are not used to talking to them\n"
"online. But it is important for the most, because talking about your daily problems\n"
"to people will help you more than you think. Using applications like Zoom,\n"
"Messenger, and Discord to keep up and see them live on video will make it feel like\n"
"things are not so bad after all.",

"Although going out is not advised, we as humans are used to going out and will\n"
"always have the urge to go visit the malls and parks. The country is blessed because\n"
"at this time of the pandemic, we already have the right amount of vaccines for\n"
"everybody that will allow us to go outside without the worry of getting infected.\n"
"Going out to study in coffee shops and other serene places may help, because taking\n"
"both the studies and everyday lives in one place keeps people demotivated."
};

char FourthSectionAnswers[3][1000] = {
"Taking a break from your work, and the other things that might be giving you stress\n"
"can help you a lot. Making time to unwind and doing other activities that give you\n"
"a boost of energy and good feeling while on your break can help with the anxiety\n"
"and stress. You can do things such as working out, reading a book, watching a\n"
"movie, or playing a video game, especially when you play with your friends.",

"Taking care of your body is the number one priority that everyone should all have.\n"
"This is the reason why we are locked up inside our houses, because we want to be\n"
"safe and away from danger. Physical activities can help you feel good, as well as\n"
"eating a healthy diet with proper hydration. Although most people cannot maintain\n"
"this, sleeping on a regular schedule is important to keep a light mood everyday.",

"Make sure you can still talk to your friends and family members even if it's through\n"
"calls and video calls. We are all experiencing the same pandemic restrictions, and\n"
"trying to relate with others is a great way to get out of that stressful feeling.\n"
"In terms of school activities, it is a good thing to cooperate with your other\n"
"schoolmates by talking to them."
};

#endif
