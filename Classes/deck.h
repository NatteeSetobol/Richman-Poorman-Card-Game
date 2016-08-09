/*
 *  deck.h
 *  rmpm
 *
 *  Created by meow meowington on 12/21/12.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef DECK_H

#include <stdlib.h>
#include <time.h>
#include "cards.h"
#include "Globals.h"


class deck
{
	public:
		deck();
		//~deck();
		card Cards[DECK_SIZE];
		void Shuffle();
		void CreateDeck();
	
};

#endif