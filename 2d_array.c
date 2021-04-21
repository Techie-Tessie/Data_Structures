#include <stdio.h>

//define 8x8 chess board
	char board [8][8] = {
    {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
    {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
	{'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
	{'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
	{'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
	{'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
	{'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'},
	{'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'}
	};

int row;
int column;

//method to print chess board	
void print_board()
{	
	printf("\n");
	//loop over each element and print it
	for (row=0; row<8; row++)
	{
      for (column=0; column<8; column++)
	  {
         printf("%c ", board[row][column]);
      }
	  printf("\n");
    }
	printf("\n");
}

int main(int argc, char **argv) 
{
	//call print_board method
	print_board();
}