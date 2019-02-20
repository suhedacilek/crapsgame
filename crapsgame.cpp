#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	
	int score=0 , sum=0 ;
	int x , y , dice1 , dice2 ;
	int next = 1; 
	
	printf("Throws your dices.. \n");

	
	while(next == 1){
		
		dice1 = rand()%6 + 1;
		dice2 = rand()%6 + 1;
	
		sum = dice1 + dice2;
		
		printf("First dice : %d \n Second dice : %d \n ", dice1,dice2);
		if(sum == 7 || sum == 11)
			printf("You win!!! \n");
		
		else if(sum == 2 || sum == 3 || sum == 12){
			printf("You lose !!! \n");
	
		}
				
		else{
			printf("Your score is : %d  \n", sum);
		
			
			x = rand()%6 + 1  ;
			y = rand()%6 + 1 ;
			
			printf("In your second chance ====> \n first dice : %d \n Second dice : %d \n ",x,y);
			score = x + y;
			
			if (sum == score){
				printf("Your score is equals to previous score , you win !! \n");
				
			}
			else if(score == 7){
				printf("You lose , it mustn't be 7 :( \n");
			}
				
			else{
				printf("You lose... \n");
			}
		}
		
		printf("Play again ? ===> (0,1) \n");
		scanf("%d", &next);
		
	}
		
}
		
		


