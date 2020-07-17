#ifndef GAME_BOARD
#define GAME_BOARD
#include "constants.h"
#include <ncurses.h>

class GameBoard {
	private:
		int row_count, column_count;
		Cell **board_matrix;
		BlockColour **board_colour_matrix;
		WINDOW *board_win;
	public:
		GameBoard();
		~GameBoard();

		/* Getters */
		Cell getCell(int, int);
		int getRowCount();
		int getColumnCount();
		
		/* Setters */
		void setCell(int, int, Cell);
		void setColour(int, int, BlockColour);

		/* Methods */
		void render();
		void createGameBoardWindow();
		void lineClear();
		bool isFilledRow(int);
		void clearRow(int);
		void copyRow(int, int);
};

#endif /* GAME_BOARD */

