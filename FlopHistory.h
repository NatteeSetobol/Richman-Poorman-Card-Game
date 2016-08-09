/*
 *  FlopHistory.h
 *  rmpm
 *
 *  Created by meow meowington on 1/5/13.
 *  Copyright 2013 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef FLOPHISTORY_H
#define FLOPHISTORY_H

#include "Flop.h"
#include "Globals.h"

class FlopHistory
{
	public:
		FlopHistory();
		Flop flop[DECK_SIZE];
		int count;
};

#endif