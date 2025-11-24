#include <stdio.h>
int main() {
	int band;
	printf("select a band (1-5): \n");
	scanf("%d",&band);
	char song;
	printf("enter the starting letter of the song : \n");
	scanf(" %c",&song);
	switch (band) {
		case 1:
			printf("band name is Linkin park \n");
			switch (song) {
				case 'I':
				case 'i':
			    printf("song name is In the End \n");
				break;
				case 'N':
				case 'n':
				printf("song name is Numb \n");
				break;	
				default:
				printf("song not found for this letter \n");
			
			}
			break;
		case 2:
			printf("band name is Imagine dragons \n");
			switch (song) {
				case 'B':
				case 'b':
					printf("song name is Believer \n");
					break;
				case 'R':
				case 'r':
					printf("song name is Radioactive \n");
					break;	
				default:
					printf("song not found for this letter \n");
						
			}
			break;	
		case 3:
			printf("band name is BTS \n");
			switch (song) {
				case 'D':
				case 'd':
					printf("song name is Dynamite \n");
					break;
				case 'M':
				case 'm':
					printf("song name is My universe \n");
					break;	
				default:
					printf("song not found for this letter \n");
						
			}
			break;
		case 4:
			printf("band name is Artic Monkey \n");
			switch (song) {
				case 'A':
				case 'a':
					printf("song name is A certain Romance \n");
					break;
				case 'I':
				case 'i':
					printf("song name is I wanna know \n");
					break;	
				default:
					printf("song not found for this letter \n");
						
			}
			break;
		case 5:
			printf("band name is The local train \n");
			switch (song) {
				case 'A':
				case 'a':
					printf("song name is Aoge tum kabhi \n");
					break;
				case 'C':
				case 'c':
					printf("song name is Choo lo \n");
					break;	
				default:
					printf("song not found for this letter \n");
						
			}
			break;
	}
		

}