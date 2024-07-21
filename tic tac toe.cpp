#include<iostream>
using namespace std;
void drawgrid(char board[3][3]){
	for(int i=0;i<=3;i++){
		for(int j=0;j<=3;j++){
			board[i][j];
		}
	}
}

bool checkwin(char board[3][3], char player){
	for(int i=0;i<=3;i++){
		if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
		   return true;
		if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
		   return true;
		   
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
       return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
       return true;
    return false;
}

int main()
{
	char board[3][3] = { {' ', ' ', ' ' },
                         {' ', ' ', ' ' },
						 {' ', ' ', ' ' } };
	char player = 'X';
	int turn,row,col;
	
	for (turn=0;turn<=9;turn++)
	{
		drawgrid(board);
		while(true) {
			cout<<"player"<<player;
			cin>>row>>col;
			
			if (board[row][col]!= ' ' || row<0 || row>2 || col<0 || col>2)
			   cout<<"invalid move try again";
		    
		    else 
		        break;
		}
		board[row][col] = player;
		
		if (checkwin(board,player)) {
			drawgrid(board);
			cout<<"player"<<player<<"wins";
			break;
		}
		
		player =(player == 'X') ? 'O' : 'X';
	}
	drawgrid(board);
	
	if(turn == 9 && !checkwin(board, 'X') && !checkwin(board, 'O'))
	   cout<<"it is a draw";
	return 0;
}
