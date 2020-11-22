#include <stdio.h>
#include <stdlib.h>

char board[3][3];

char verify();
void is_draw();
void player_move();
void computer_move();
void show_board();

int main(void){

  char done;
  printf("\n" );
  printf("\n" );
  printf("\t\t TIC - TAC - TOE \n");
  printf("\t   --------------------------\n");
  printf("   ---INSTRUCTIONS--- \n");
  printf("\n" );
  printf("~ This is a single player game.\n");
  printf("~ The game is played aginst Computer AI.\n");
  printf("~ The player is 'X' whereas computer is 'O'.\n");
  printf("~ X and O are called markers. \n");
  printf("\n" );
  printf("~ The Gameboard is divided into rows and columns.\n" );
  printf("~ Rows (x coordinate) and Columns (y coordinate) are numbers 1,2 and 3.\n" );
  printf("~ This is how the board would look:\n");
  printf("\n" );
  printf("      1   2   3\n" );
  printf("\n" );
  printf(" 1      |   |   \n" );
  printf("     ---|---|---\n");
  printf(" 2      |   |   \n" );
  printf("     ---|---|---\n");
  printf(" 3      |   |   \n" );
  printf("\n" );
  printf("     ---HOW TO PLAY--- \n");
  printf("\n" );
  printf("~ To input markers at desired location , enter: row(x),column(y).\n");
  printf("~ Example: To input marker in centre of gameboard, enter: 2,2 .\n");

  char choice;

  printf("Are you ready to play? (y/n) ");
  scanf("%c",&choice);

  if (choice =='y' || choice=='Y'){
      done =  ' ';
      is_draw();
      do {
        show_board();
        player_move();
        done = verify();
        if(done!= ' ') break;
        computer_move();
        done = verify();
      } while(done== ' ');
      if(done=='X'){
      printf("You Win!!!!\n");
      printf("Computer AI: Human Intelligence >>>> Artificial Intelligence!\n");
      }
      else
      {
          printf("Computer Wins!!!!\n");
          printf("Computer AI: Why don't you re-run the game and try again?\n");
      }
      printf("\n");
      show_board();
      return 0;
  }
  else{
      return 0;
  }
}

void is_draw(){
  int i, j;

  for(i=0; i<3; i++)
    for(j=0; j<3; j++) board[i][j] =  ' ';
}


void player_move(){
  int x, y;

  printf("Enter x,y coordinates to place the marker 'X': ");
  scanf("%d%*c%d", &x, &y);
  char c;
  fflush(stdin);


  x--; y--;

  if(board[x][y]!= ' '){
    printf("--> Invalid move.\n");
    printf("--> Incorect coordinates or square already occupied.\n");
    printf("--> Try again.\n");
    player_move();
  }
  else board[x][y] = 'X';
}


void computer_move(){
  int i, j;
  for(i=0; i<3; i++){
    for(j=0; j<3; j++)
      if(board[i][j]==' ') break;
    if(board[i][j]==' ') break;
  }

  if(i*j==9)  {
    printf("Well Tried...but a DRAW.\n");
    printf("Why don't you re-run the game and try again?\n");
    exit(0);
  }
  else
    board[i][j] = 'O';
}


void show_board(){
  int t;

  for(t=0; t<3; t++) {
    printf(" %c | %c | %c ",board[t][0],
            board [t][1], board [t][2]);
    if(t!=2) printf("\n---|---|---\n");
  }
  printf("\n");
}

char verify(void){
  int i;

  for(i=0; i<3; i++)
    if(board[i][0]==board[i][1] &&
       board[i][0]==board[i][2]) return board[i][0];

  for(i=0; i<3; i++)
    if(board[0][i]==board[1][i] &&
       board[0][i]==board[2][i]) return board[0][i];


  if(board[0][0]==board[1][1] &&
     board[1][1]==board[2][2])
       return board[0][0];

  if(board[0][2]==board[1][1] &&
     board[1][1]==board[2][0])
       return board[0][2];

  return ' ';
}
