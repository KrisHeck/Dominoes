#include "CDominoes.h"
#include "CPlayer.h"
#include "CRandom.h"
#include "CTable.h"
#include "Domino.h"

int
main()
{
    CTable table;

    CPlayer player1(&table);
    CPlayer player2(&table);

    player1.drawHand();
    player2.drawHand();

    // setup
    bool player1_to_move = true;

    // game loop
    while (!table.isGameOver()) {
	if (player1_to_move)
	    player1.makeMove();
	else
	    player2.makeMove();
	
	player1_to_move == !player1_to_move;
    }

    // Display results
}
