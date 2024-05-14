#include<stdio.h>
int printboard();
int checkwin();
char board[]={'0','1','2','3','4','5','6','7','8','9'};

int main(){
	int player=1,input,status=-1;
	printboard();
	while(status==-1){
	 player = (player % 2) ? 1 : 2;
		char mark=(player==1)? 'x':'0';
			printf("please enter a player %d\n\n",player);
    scanf("%d",&input);
    if(input<1 || input>9){
    	printf("invalid input");
	}
   board[input]=mark;
   printboard();
   
   status=checkwin();
   if(status==1){
   	printf("player %d is winner",player);
   }
   else if(status==0){
   	printf("draw");
   
   }
   player++;
	}


return 0;
}



int printboard(){
	printf("==== Tick Tack Toe ====\n\n");
	printf("       |       |       \n");
    printf("   %c   |   %c   |   %c   \n",board[1],board[2],board[3]);
    printf("_______|_______|_______\n");  
    printf("       |       |       \n");
    printf("   %c   |   %c   |   %c   \n",board[4],board[5],board[6]);
    printf("_______|_______|_______\n"); 
    printf("       |       |       \n");
    printf("   %c   |   %c   |   %c   \n",board[7],board[8],board[9]);
    printf("       |       |       \n");
    printf("\n\n");
}
int checkwin(){
	if(board[1]==board[2] && board[2]==board[3]){
		return 1;
	}
	if(board[4]==board[5] && board[5]==board[6]){
		return 1;
	}
	if(board[7]==board[8] && board[8]==board[9]){
		return 1;
	}
	if(board[1]==board[4] && board[4]==board[7]){
		return 1;
	}
	if(board[2]==board[5] && board[5]==board[8]){
		return 1;
	}
	if(board[3]==board[6] && board[6]==board[9]){
		return 1;
	}
	if(board[1]==board[5] && board[5]==board[9]){
		return 1;
	}
	if(board[3]==board[5] && board[5]==board[7]){
		return 1;
	}
	int count=0;
	for(int i=1; i<=9;i++){
		if(board[i]=='x' || board[i]=='0'){
			count++;
		}
	}
	if(count==9){
		return 0;
	}
	
	
	return -1;
}
