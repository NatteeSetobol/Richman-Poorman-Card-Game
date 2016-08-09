/*
 *  Game.h
 *  rmpm
 *
 *  Created by meow meowington on 12/16/12.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef GAME_H
#define GAME_H

#include <pthread.h>
#include "Engine.h"
#include "Globals.h"
#include "deck.h"
#include "Player.h"
#include "FlopHistory.h"

class Game
{
	public:

		Game();
		~Game();
		Engine* engine;
		int state;
		int oldState;
	
		int gameState;
		int oldGameState;
	
		bool pressed;
		deck* Deck;
	
		FlopHistory* flopHistory;
	
		void run();
		void ShowTitlescreen();
		void ChangeState(int newState,int oldstate);
		void HandleControl();
		void Render();
		void Logic();
	
		int FlopCount();
	
		void RenderGameplay();
		void LogicGameplay();
	
		void GameChangeState(int newGameState);
	
		void ShowCard(int value, char suit, int x, int y);
	
		void ShowAllCards();
	
		bool isFreePlay();
	
		void PlayCards(int player);
		
		void PauseMode(int oldstate);
	
		void EasyMode(int player);
	
	    void Pass(int player);
	
		int GetPlayersLeft();
	
		cord touchedXY;
	
		int shuffles;
		
	
		int round;
		int cardCount;
		int playerCount;
		int handCount;
	
		int dealer;
		int rank[MAXPLAYERS];
		int winnersCircle[MAXPLAYERS];
		int winnersCount;
	
	
		Player players[MAXPLAYERS];

		int mode;
		int turn;
		bool isShimari;
		bool isRevolution;
	
		/* ===== Options === */
		bool shimari;
		bool revolution;
		bool jokers;
		bool noHighCards;
		bool sequence;
	
		int pauseLength;
		int pauseCount;
		int pauseLastState;
	
		int roundHolder;
	
		int cursorX;
		int cursorY;
};


#endif