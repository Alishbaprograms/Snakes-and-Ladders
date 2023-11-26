#include <stdio.h>
#include <windows.h>
#include <mmsystem.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <MMsystem.h>


char a[37][77] ={
    
	" 100     99      98      97      96      95      94      93      92      91 ",
	"          /\\             \\-\\                                              ",
	"           \\\\             \\-\\                                             ",
	"            \\\\             \\-\\                                            ",
	" 81      82  \\\\  83      84 \\-\\  85      86      87      88      89      90 ",
	"              \\\\             \\-\\                                        /\\",
	"              //              \\-\\                                      //   ",
	"              \\\\               \\-\\                                    //  ",
	" 80      79    \\\\78      77      76      75      74      73      72  //  71 ",
	"  \\-\\           \\\\                      /\\             /-/           \\\\   ",
	"   \\-\\          //                      //            /-/            //     ",
	"    \\-\\        //                      //            /-/             \\\\     ",
	" 61  \\-\\ 62   // 63      64      65   // 66      67 /-/  68      69  //  70 ",
	"     |-|     //                       \\\\           /-/              //    ",
	"     |-|     \\\\                       //          /-/              //     ",
	"     |-|     //                      //          /-/               \\\\      ",
	" 60  |-| 59 //   58      57      56 //   55      54      53      52 \\\\   51 ",
	"     |-|   //                      //                               //     ",
	"     |-|   \\\\                      \\\\                              //    ",
	"     |-|    \\\\                      \\\\                            //      ",
	" 41  |-| 42  \\\\  43      44      45 //   46      47      48      49      50 ",
	"     |-|      \\\\                   //                 /-/                 ",
	"     |-|       \\\\                 //                 /-/                  ",
	"     |-|        \\\\               //                 /-/                   ",
	" 40  |-| 39      38      37      36      35      34 |-|  33      32      31 ",
	"     |-|          \\\\                                |-|                   ",
	"     |-|           \\\\                               |-|                   ",
	"     |-|            \\\\                              |-|                   ",
	" 21  |-| 22      23  \\\\  24      25      26      27 |-|  28      29      30 ",
	"     |-|              \\\\                /\\          /-/                   ",
	"      \\-\\              \\\\              //          /-/                    ",
	"       \\-\\              \\\\            //          /-/                     ",
	" 20      19      18      17      16   \\\\ 15      14      13      12      11 ",
	"                                       \\\\                                   ",
	"                                       //                                   ",
	"                                       \\\\                                   ",
	" 01      02      03      04      05      06      07      08      09      10 ",
};

char originalarray[37][77] ={
    
	" 100     99      98      97      96      95      94      93      92      91 ",
	"          /\\             \\-\\                                              ",
	"           \\\\             \\-\\                                             ",
	"            \\\\             \\-\\                                            ",
	" 81      82  \\\\  83      84 \\-\\  85      86      87      88      89      90 ",
	"              \\\\             \\-\\                                        /\\",
	"              //              \\-\\                                      //   ",
	"              \\\\               \\-\\                                    //  ",
	" 80      79    \\\\78      77      76      75      74      73      72  //  71 ",
	"  \\-\\           \\\\                      /\\             /-/           \\\\   ",
	"   \\-\\          //                      //            /-/            //     ",
	"    \\-\\        //                      //            /-/             \\\\     ",
	" 61  \\-\\ 62   // 63      64      65   // 66      67 /-/  68      69  //  70 ",
	"     |-|     //                       \\\\           /-/              //    ",
	"     |-|     \\\\                       //          /-/              //     ",
	"     |-|     //                      //          /-/               \\\\      ",
	" 60  |-| 59 //   58      57      56 //   55      54      53      52 \\\\   51 ",
	"     |-|   //                      //                               //     ",
	"     |-|   \\\\                      \\\\                              //    ",
	"     |-|    \\\\                      \\\\                            //      ",
	" 41  |-| 42  \\\\  43      44      45 //   46      47      48      49      50 ",
	"     |-|      \\\\                   //                 /-/                 ",
	"     |-|       \\\\                 //                 /-/                  ",
	"     |-|        \\\\               //                 /-/                   ",
	" 40  |-| 39      38      37      36      35      34 |-|  33      32      31 ",
	"     |-|          \\\\                                |-|                   ",
	"     |-|           \\\\                               |-|                   ",
	"     |-|            \\\\                              |-|                   ",
	" 21  |-| 22      23  \\\\  24      25      26      27 |-|  28      29      30 ",
	"     |-|              \\\\                /\\          /-/                   ",
	"      \\-\\              \\\\              //          /-/                    ",
	"       \\-\\              \\\\            //          /-/                     ",
	" 20      19      18      17      16   \\\\ 15      14      13      12      11 ",
	"                                       \\\\                                   ",
	"                                       //                                   ",
	"                                       \\\\                                   ",
	" 01      02      03      04      05      06      07      08      09      10 ",
};


void firstdigitodd(int i,int playernum){
	if (playernum==1){
	int n=0,m=0;
	n = i/10;
	m = i%10;
	a[36-(4*n)][80-(8*m)] = '-';
	a[36-(4*n)][81-(8*m)] = 'P';
	a[36-(4*n)][82-(8*m)] = '1';
	a[36-(4*n)][83-(8*m)] = '-';	
	}
	else if (playernum==2){
	int n=0,m=0;
	n = i/10;
	m = i%10;
	a[36-(4*n)][80-(8*m)] = '-';
	a[36-(4*n)][81-(8*m)] = 'P';
	a[36-(4*n)][82-(8*m)] = '2';
	a[36-(4*n)][83-(8*m)] = '-';	
	}
}

void abnormalfirstdigiteven(int i,int playernum){
	if (playernum==1){
	int n=0;
	n = i/10;
	a[40-(4*n)][0]= '-';
	a[40-(4*n)][1]= 'P';
	a[40-(4*n)][2]= '1';
	a[40-(4*n)][3]= '-';
	}
	else if (playernum==2){
	int n=0;
	n = i/10;

	a[40-(4*n)][0]= '-';
	a[40-(4*n)][1]= 'P';
	a[40-(4*n)][2]= '2';
	a[40-(4*n)][3]= '-';
	}
	
}

void abnormalfirstdigitodd(int i,int playernum){
	
	if (playernum==1){
	
	int n=0;
	n = i/10;
	a[40-(4*n)][71]= '-';
	a[40-(4*n)][72]= 'P';
	a[40-(4*n)][73]= '1';
	a[40-(4*n)][74]= '-';
	}
	else if (playernum==2){
	int n=0;
	n = i/10;
	a[40-(4*n)][71]= '-';
	a[40-(4*n)][72]= 'P';
	a[40-(4*n)][73]= '2';
	a[40-(4*n)][74]= '-';		
	}

}

void firstdigiteven(int i,int playernum){
	if (playernum==1){
	int n=0,m=0;
	n = i/10;
	m = i%10;
	a[36-(4*n)][(8*m)-8] = '-';
	a[36-(4*n)][(8*m)-7] = 'P';
	a[36-(4*n)][(8*m)-6]= '1';
	a[36-(4*n)][(8*m)-5] = '-';
	}
	else if (playernum==2){
	int n=0,m=0;
	n = i/10;
	m = i%10;

	a[36-(4*n)][(8*m)-8] = '-';
	a[36-(4*n)][(8*m)-7] = 'P';
	a[36-(4*n)][(8*m)-6]= '2';	
	a[36-(4*n)][(8*m)-5] = '-';
	}
	
}

void firstdigitchecker(int i,int playernum){
	int a;	
	if (i%10==0){
		a=(i/10)%2;
		if (a==0){
			abnormalfirstdigiteven(i,playernum);
			return;
		}
		else if (a==1){
			abnormalfirstdigitodd(i,playernum);
			return;
		}
	}
	a=(i/10)%2;
	if (a==0)
		firstdigiteven(i,playernum);
	else if (a==1)
		firstdigitodd(i,playernum);		
}

void resetarray(){
	int i;
	for (i=0;i<37;i++){
		strcpy(a[i],originalarray[i]);
	}
	a[2][46]=' ';
	a[2][47]=' ';
	a[2][48]=' ';
	a[2][49]=' ';
}

int diceroll(){
	srand(time(0));
	return (rand()%6)+1;
}

void printtitle(){
	system("cls");	
	printf("   _____             _                                  _   _               _     _                \n");
	printf("  / ____|           | |                 /\\             | | | |             | |   | |               \n");
	printf(" | (___  _ __   __ _| | _____  ___     /  \\   _ __   __| | | |     __ _  __| | __| | ___ _ __ ___  \n");
	printf("  \\___ \\| '_ \\ / _` | |/ / _ \\/ __|   / /\\ \\ | '_ \\ / _` | | |    / _` |/ _` |/ _` |/ _ \\ '__/ __| \n");
	printf("  ____) | | | | (_| |   <  __/\\__ \\  / ____ \\| | | | (_| | | |___| (_| | (_| | (_| |  __/ |  \\__ \\ \n");
	printf(" |_____/|_| |_|\\__,_|_|\\_\\___||___/ /_/    \\_\\_| |_|\\__,_| |______\\__,_|\\__,_|\\__,_|\\___|_|  |___/ \n\n");
	}

struct playerbody{
	int pos;
	char name[50];
};

void snakeorladder(int *p,int *checksnake){
							if (*p==19){
								*p=80;
								*checksnake=1;
							}
							else if (*p==99){
								*p=17;
								*checksnake=0;
							}
							else if (*p==75){
								*p=36;
								*checksnake=0;	
							}
							else if(*p==76){
								*p=97;
								*checksnake=1;
							}
							else if(*p==54){
								*p=73;
								*checksnake=1;
							}
							else if(*p==14){
								*p=48;
								*checksnake=1;
							}
							else if(*p==90){
								*p=49;
								*checksnake=0;
							}
							else if (*p==26){
								*p=6;					
								*checksnake=0;							
							}
							else if (*p>100)
								*p=100;
}



int main()
{
	LPCTSTR SongFile="project.wav";
    PlaySound(SongFile,NULL,SND_ASYNC);
    char ch;
    char highscore[10];
    char name[50];
    int HS_int;
	int key;
	FILE *scores;
	FILE *mpfile;
	
	
	struct playerbody p1;
	struct playerbody p2;
	start:
	p1.pos=0;
	p2.pos=0;
		printtitle();
		
		int movescounter=0;
		int choice;
		puts("1. Singleplayer");
		puts("2. Multiplayer");
		puts("3. How to play?");
		puts("4. Display Scores");
		puts("5. Quit Game");
		scanf("%d",&choice);
		 
		switch (choice){
			case 1:
				char backtomenu;
				system("cls");
				printf("Enter Player Name: ");
				scanf("%s",name);
				fflush(stdin);
				system("cls");
				
				key=-1;
				for(int i = 0 ;i<37;i++)	
				puts(a[i]);		
				while(p1.pos!=100){
						int roll;
						int checksnake=-1;
						printf("\nPress 0 to roll: ");
						scanf("%d",&key);
						if (key==0){
							roll=diceroll();
							p1.pos=p1.pos+roll;
							snakeorladder(&(p1.pos),&checksnake);
							resetarray();
								system("cls");
							firstdigitchecker(p1.pos,1);
							for(int i = 0 ;i<37;i++)	
								puts(a[i]);
							movescounter++;	
							if (checksnake==1){
								printf("YAAAY! LADDER!");
								checksnake=-1;
							}
							else if (checksnake == 0){
								printf("Uh Oh! You got bit by a snake!");
								checksnake =-1;
							}
							printf("\nDice Rolled %d. New Position: %d",roll,p1.pos);
						}
				} 
				printf("\nYOU WON in %d moves!\n",movescounter);
				scores=fopen("scores.txt","r");
				fseek(scores,11,SEEK_SET);
				fgets(highscore,10,scores);
				HS_int = atoi(highscore);
				
				if(movescounter<HS_int||HS_int==0){
					printf("NEW HIGHSCORE! CONGRATULATIONS %s",name);
					scores=fopen("scores.txt","r+");
					fseek(scores,0,SEEK_SET);
					fprintf(scores,"                                                                        \n");//erase entire first line
					fseek(scores,0,SEEK_SET);
					fprintf(scores,"Highscore: %d by %s\n",movescounter,name); //prints the new highscore along with the person's name
					fclose(scores);
				}
				
				scores=fopen("scores.txt","a");
				fprintf(scores,"%s: %d\n",name,movescounter);
				fclose(scores);
				
				printf("\n\n Press k to play again: ");
				
				do{
					scanf(" %c",&backtomenu);
					if (backtomenu=='k')		
						goto start;
				}
				while(backtomenu!='k');					
				
				
				//getchar();
				break;
			
			
			case 2:	
				system("cls");
				printf("Enter Player 1's Name: ");
				scanf("%s",p1.name);
				fflush(stdin);		
				
				printf("Enter Player 2's Name: ");
				scanf("%s",p2.name);
				fflush(stdin);				
				
				system("cls");
						
				for(int i = 0 ;i<37;i++)	
						puts(a[i]);		
				key;
				srand(time(0));
				while(p1.pos!=100 && p2.pos!=100){
				printf("\nPlayer 1: Press 1 to roll.\nPlayer 2: Press 2 to roll.\n ");
				scanf("%d",&key);
				int roll;
				int checksnake=-1;
				if (key==1){
					roll=diceroll();
					p1.pos=p1.pos+roll;
					snakeorladder(&(p1.pos),&checksnake);
					resetarray();
						system("cls");
					firstdigitchecker(p1.pos,1);
					firstdigitchecker(p2.pos,2);
					for(int i = 0 ;i<37;i++)	
						puts(a[i]);
					if (checksnake==1){
						printf("YAAAY! LADDER!");
						checksnake=-1;
					}
					else if (checksnake == 0){
						printf("Uh Oh! You got bit by a snake!");
						checksnake =-1;
					}
					printf("\nDice Rolled %d. \t%s Position: %d\n\t\t%s Position: %d",roll,p1.name,p1.pos,p2.name,p2.pos);						
				}
				else if (key==2){
					roll=diceroll()+1;
					p2.pos=p2.pos+roll;
					snakeorladder(&(p2.pos),&checksnake);

					resetarray();
						system("cls");
					firstdigitchecker(p1.pos,1);
					firstdigitchecker(p2.pos,2);
					for(int i = 0 ;i<37;i++)	
						puts(a[i]);
					
					if (checksnake==1){
						printf("YAAAY! LADDER!");
						checksnake=-1;
					}
					else if (checksnake == 0){
						printf("Uh Oh! You got bit by a snake!");
						checksnake =-1;
					}
					printf("\nDice Rolled %d. \t%s Position: %d\n\t\t%s Position: %d",roll,p1.name,p1.pos,p2.name,p2.pos);
						
				}		
			}		
						
				if (p1.pos==100)		
					printf("\n%s WINS!\t %s WINS!\t %s WINS!",p1.name,p1.name,p1.name);
				else 
					printf("\n%s WINS!\t %s WINS!\t %s WINS!",p2.name,p2.name,p2.name);	
				
				mpfile=fopen("multiplayer.txt","a+");
				if (p1.pos==100)
					fprintf(mpfile,"%s won their game against %s\n",p1.name,p2.name);
				else if (p2.pos==100)
					fprintf(mpfile,"%s won their game against %s\n",p2.name,p1.name);	
				fclose(mpfile);
				
				printf("\n\nPress k to play again: ");
				
				do{
					scanf(" %c",&backtomenu);
					if (backtomenu=='k')		
						goto start;
				}
				while(backtomenu!='k');					
				
				
				break;
			
			case 3:
				system("cls");
				printtitle();
				printf("\n\nFor the singleplayer mode, your goal is to get\nto the finish line in as little moves as possible.\nBut beware for the danger of snakes looms.\n\n");
				printf("For multiplayer mode, you and your friend play \nin turns. The final goal is to the reach the finish\nline before your friend.");
				printf("\n\nPress k to go back to menu.");
				//char backtomenu;
				fflush(stdin);
				do{
					scanf(" %c",&backtomenu);
					if (backtomenu=='k')		
						goto start;
				}
				while(backtomenu!='k');
				break;
				
			case 4: 	
				system("cls");
				printtitle();
				
				printf("SINGPLAYER SCORES: \n");
				
				scores=fopen("scores.txt","r");
				while(1){
				ch=fgetc(scores);
				if (ch==EOF)
					break;
				printf("%c",ch);
				}
				fclose(scores);
				
				printf("\n\nMULTIPLAYER GAMES: \n");
				mpfile=fopen("multiplayer.txt","r");
				while(1){
				ch=fgetc(mpfile);
				if (ch==EOF)
					break;
				printf("%c",ch);
				}
				fclose(mpfile);				
				
				
				
				
				printf("\n\nPress k to go back to menu: ");
				fflush(stdin);
				do{
					scanf(" %c",&backtomenu);
					if (backtomenu=='k')		
						goto start;
				}
				while(backtomenu!='k');		
				break;
			case 5: return 1;			
	}
	
}
		
			
				
				
			
