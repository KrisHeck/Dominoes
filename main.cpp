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

    // setup
    bool player1_to_move = true; // TODO: set this variable randomly

    // game loop
    while (!table.isGameOver()) {
	if (player1_to_move)
	    player1.makeMove();
	else
	    player2.makeMove();
    }

    // Display results
}
