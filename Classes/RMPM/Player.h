/*
 *  Player.h
 *  rmpm
 *
 *  Created by meow meowington on 1/2/13.
 *  Copyright 2013 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef PLAYER_H
#define PLAYER_H
#include "cards.h"
#include "Globals.h"

class Player
{
	public:
		card hand[MAX_HAND];
		card tempCard[MAX_HAND];
		Player();
		int cardX;
		int cardY;
		bool isOut;
		int points;
		bool hasPassed;
		void SortHand();
		void SwapCards(int swap, int with);
		bool isCardVaild(int cardNumber);
		bool isCardSelected(int cardNumber);
		void SelectCard(int cardNumber, int selectPhase);
		int GetSelectionCount();
		bool hasRevolution();
		bool hasShimari(card* flop);
		bool IsHandValueSame();
		bool isGreaterThanFlop(card* flop);
		bool isLessThenFlop(card* flop);
		int RePositionCards();
		bool CheckSeq();
		void SwapTempCards(int swap, int with);
		bool SeqCheck(card* flop);
		bool CheckIfOut();
		int cursorX;
		int cursorY;
};

#endif