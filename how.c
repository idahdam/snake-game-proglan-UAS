#include "Header.h"

void about(){
	system("cls");
    background();
    int i,j;
    // display title
	int p=3;
	int q = 12;
	gotoxy(q,p);printf("     ___      .______     ______    __    __  .___________.");p++;
	gotoxy(q,p);printf("    /   \\     |   _  \\   /  __  \\  |  |  |  | |           |");p++;
	gotoxy(q,p);printf("   /  ^  \\    |  |_)  | |  |  |  | |  |  |  | `---|  |----`");p++;
	gotoxy(q,p);printf("  /  /_\\  \\   |   _  <  |  |  |  | |  |  |  |     |  | ");p++;    
	gotoxy(q,p);printf(" /  _____  \\  |  |_)  | |  `--'  | |  `--'  |     |  | ");p++;    
	gotoxy(q,p);printf("/__/     \\__\\ |______/   \\______/   \\______/      |__| ");p++;    
                                                           
	
	
	// display smaller table
	p = 12;
	q = 8 ;
	gotoxy(q,p);for ( i= 0 ; i <64 ; i++){
    printf("=");
	}
	printf("\n");p++;
	for ( j =0 ; j < 13 ; j++ ){
	gotoxy(q,p);
		for ( i= 0 ; i <64 ; i++){
			if (i==0){
				printf("%c",186);
			}
			else if (i == 63){
					printf("%c",186);
			}
			else{
				printf(" ");
			}
		}
		p++;
	}
	gotoxy(q,p);for ( i= 0 ; i <64 ; i++){
    printf("=");
	}
	p = 14;
    q = 10;
	gotoxy(q,p);printf(" snake game");p+=2;
	gotoxy(q,p);printf(" The player navigates their snake so that it can eat up ");p++;
	gotoxy(q,p);printf(" the food that appearing random on the screen.");p+=2;
	gotoxy(q,p);printf(" After consuming a food, the snake grows longer.");p+=2; 
	gotoxy(q,p);printf(" It dies if it runs into the walls or into its own tail.");p+=2;
	gotoxy(q,p);printf(" All objects in this game,including the snakes and the walls");p++;
    gotoxy(q,p);printf(" are represented by simple ASCII characters in textmode.");
    //display snake
    p = 28;
    q = 20;
	gotoxy(q,p);printf("   _________         _________");p++;
	gotoxy(q,p);printf("  /         \\       /         \\");p++;
	gotoxy(q,p);printf(" /  /~~~~~\\  \\     /  /~~~~~\\  \\");p++;
	gotoxy(q,p);printf(" |  |     |  |     |  |     |  |         /");p++;
	gotoxy(q,p);printf(" |  |     |  |     |  |     |  |       //");p++;
	gotoxy(q,p);printf("(o  o)    \\  \\_____/  /     \\  \\_____/ /");p++;
	gotoxy(q,p);printf(" \\__/      \\         /       \\        /");p++;
	gotoxy(q,p);printf("  |         ~~~~~~~~~         ~~~~~~~~");p++;
	gotoxy(q,p);printf("  ^");p++;
    
                                                       
    gotoxy(32,38);
    printf("copyright hadi & jo\n");
    getch();
    menu();
}
