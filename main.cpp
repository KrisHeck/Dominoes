#include "CDominoes.h"
#include "CPlayer.h"
#include "CRandom.h"
#include "CTable.h"
#include "dominoes.h"

int
main()
{
    CDominoes dealer;
    CTable table;

    CPlayer player1(&dealer, &table);
    CPlayer player2(&dealer, &table);

    // setup
    dealer.create_dominoes();
    bool player1_to_move = true; // TODO: set this variable randomly

    // game loop
    while (/* not gameover */) {
	if (player1_to_move)
	    player1.makeMove();
	else
	    player2.makeMove();
    }

    // Display results
}
