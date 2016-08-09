/*
 *  Game.cpp
 *  rmpm
 *
 *  Created by meow meowington on 12/16/12.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#include "Game.h"


Game::Game()
{
	pauseLength=15;
	engine = new Engine();
	pressed = false;
	ChangeState(INIT,TITLE_SCREEN);
}



void Game::run( )
{
	bool isDone=false;
	do
	{
		if (engine->freeLoop(0.052)) isDone = true;
	
		Render();
		Logic();
		
	} while(!isDone);
}

/* ===============================Title screen =============================*/
void Game::ShowTitlescreen()
{
	engine->ShowImage((char*) TITLE_IMAGE, TITLE_IMAGE_X, TITLE_IMAGE_Y);
	engine->ShowText((char*) START_TEXT, START_TEXT_X, START_TEXT_Y );
	engine->ShowText((char*) OPTION_TEXT, OPTION_TEXT_X, OPTION_TEXT_Y );

}
/*===========================================================================*/

void Game::Render()
{
	engine->startRender();
	
	switch(state)
	{
		case TITLE_SCREEN:
		{
			ShowTitlescreen();
			break;
		}
		case INIT:
		{
			break;
		}
		case GAMEPLAY:
		{
			RenderGameplay();
			break;
		}
	}
	
	engine->endRender();
}

void Game::Logic()
{
	HandleControl();
	
	switch(state)
	{
		case TITLE_SCREEN:
		{
			if (touchedXY.x > 216 && touchedXY.x < 304 && touchedXY.y > 169 && touchedXY.y < 192 && pressed == false)
			{
				ChangeState(INIT,GAMEPLAY);
				pressed = true;
			}
			break;
		}
		case INIT:
		{
			switch (oldState)
			{
				case TITLE_SCREEN:
				{
					touchedXY.x=0;
					touchedXY.y=0;
					engine->LoadImage((char*) TITLE_IMAGE);
					engine->LoadImage("Background.png");
					shimari = true;
					revolution = false;
					jokers = true;
					noHighCards=true;
					sequence = true;
					isRevolution=false;
					break;
				}
				case GAMEPLAY:
				{
					GameChangeState(INIT_GAME);
					break;
				}
			}
			
			ChangeState(oldState,NULL);
			pressed = false;
			break;
		}
		case GAMEPLAY:
		{
			LogicGameplay();
			break;
		}
		
	}	
}

void Game::ShowCard(int value, char suit, int x, int y)
{
	switch (value)
	{
			case 1:
			{
				switch (suit)
				{
						case 'c':
						{
							engine->ShowImage("c_ace.PNG",x,y);
							break;
						}
						case 'd':
						{
							engine->ShowImage("h_ace.PNG", x, y);
							break;
						}
						case 'h':
						{
							engine->ShowImage("s_ace.PNG", x, y);
							break;
						}
						case 's':
						{
							engine->ShowImage("d_ace.PNG", x, y);
							break;
						}
						break;
				}
				break;
			}
			case 2:
			{
					switch (suit)
					{
						case 'c':
						{
							engine->ShowImage("c_two.PNG",x,y);
							break;
						}
						case 'd':
						{
							engine->ShowImage("h_two.PNG", x, y);
							break;
						}
						case 'h':
						{
							engine->ShowImage("s_two.PNG", x, y);
							break;
						}
						case 's':
						{
							engine->ShowImage("d_two.PNG", x, y);
							break;
						}
						break;
					}
					break;
			}
			case 3:
			{
					switch (suit)
					{
						case 'c':
						{
							engine->ShowImage("c_three.PNG",x,y);
							break;
						}
						case 'd':
						{
							engine->ShowImage("h_three.PNG", x, y);
							break;
						}
						case 'h':
						{
							engine->ShowImage("s_three.PNG", x, y);
							break;
						}
						case 's':
						{
							engine->ShowImage("d_three.PNG", x, y);
							break;
						}
					}
					break;
			}
			case 4:
			{
					switch (suit)
					{
						case 'c':
						{
							engine->ShowImage("c_four.PNG",x,y);
							break;
						}
						case 'd':
						{
							engine->ShowImage("h_four.PNG", x, y);
							break;
						}
						case 'h':
						{
							engine->ShowImage("s_four.PNG", x, y);
							break;
						}
						case 's':
						{
							engine->ShowImage("d_four.PNG", x, y);
							break;
						}
						break;
					}
					break;
			}
			
			case 5:
			{
				switch (suit)
				{
					case 'c':
					{
						engine->ShowImage("c_five.PNG",x,y);
						break;
					}
					case 'd':
					{
						engine->ShowImage("h_five.PNG", x, y);
						break;
					}
					case 'h':
					{
						engine->ShowImage("s_five.PNG", x, y);
						break;
					}
					case 's':
					{
						engine->ShowImage("d_five.PNG", x, y);
						break;
					}
					break;
				}
				break;
			}
			case 6:
			{
				switch (suit)
				{
					case 'c':
					{
						engine->ShowImage("c_six.PNG",x,y);
						break;
					}
					case 'd':
					{
						engine->ShowImage("h_six.PNG", x, y);
						break;
					}
					case 'h':
					{
						engine->ShowImage("s_six.PNG", x, y);
						break;
					}
					case 's':
					{
						engine->ShowImage("d_six.PNG", x, y);
						break;
					}
					break;
				}
				break;
			}			
			
			case 7:
			{
				switch (suit)
				{
					case 'c':
					{
						engine->ShowImage("c_seven.PNG",x,y);
						break;
					}
					case 'd':
					{
						engine->ShowImage("h_seven.PNG", x, y);
						break;
					}
					case 'h':
					{
						engine->ShowImage("s_seven.PNG", x, y);
						break;
					}
					case 's':
					{
						engine->ShowImage("d_seven.PNG", x, y);
						break;
					}
					break;
				}
				break;
			}	
			
		case 8:
		{
			switch (suit)
			{
				case 'c':
				{
					engine->ShowImage("c_eight.PNG",x,y);
					break;
				}
				case 'd':
				{
					engine->ShowImage("h_eight.PNG", x, y);
					break;
				}
				case 'h':
				{
					engine->ShowImage("s_eight.PNG", x, y);
					break;
				}
				case 's':
				{
					engine->ShowImage("d_eight.PNG", x, y);
					break;
				}
				break;
			}
			break;
		}
		case 9:
		{
			switch (suit)
			{
				case 'c':
				{
					engine->ShowImage("c_nine.PNG",x,y);
					break;
				}
				case 'd':
				{
					engine->ShowImage("h_nine.PNG", x, y);
					break;
				}
				case 'h':
				{
					engine->ShowImage("s_nine.PNG", x, y);
					break;
				}
				case 's':
				{
					engine->ShowImage("d_nine.PNG", x, y);
					break;
				}
					break;
			}
			break;
		}
		case 10:
		{
			switch (suit)
			{
				case 'c':
				{
					engine->ShowImage("c_ten.PNG",x,y);
					break;
				}
				case 'd':
				{
					engine->ShowImage("h_ten.PNG", x, y);
					break;
				}
				case 'h':
				{
					engine->ShowImage("s_ten.PNG", x, y);
					break;
				}
				case 's':
				{
					engine->ShowImage("d_ten.PNG", x, y);
					break;
				}
					break;
			}
			break;
		}
		case 11:
		{
			switch (suit)
			{
				case 'c':
				{
					engine->ShowImage("c_jack.PNG",x,y);
					break;
				}
				case 'd':
				{
					engine->ShowImage("h_jack.PNG", x, y);
					break;
				}
				case 'h':
				{
					engine->ShowImage("s_jack.PNG", x, y);
					break;
				}
				case 's':
				{
					engine->ShowImage("d_jack.PNG", x, y);
					break;
				}
					break;
			}
			break;
		}
		case 12:
		{
			switch (suit)
			{
				case 'c':
				{
					engine->ShowImage("c_queen.PNG",x,y);
					break;
				}
				case 'd':
				{
					engine->ShowImage("h_queen.PNG", x, y);
					break;
				}
				case 'h':
				{
					engine->ShowImage("s_queen.PNG", x, y);
					break;
				}
				case 's':
				{
					engine->ShowImage("d_queen.PNG", x, y);
					break;
				}
				break;
			}
			break;
		}
		case 13:
		{
			switch (suit)
			{
				case 'c':
				{
					engine->ShowImage("c_king.PNG",x,y);
					break;
				}
				case 'd':
				{
					engine->ShowImage("h_king.PNG", x, y);
					break;
				}
				case 'h':
				{
					engine->ShowImage("s_king.PNG", x, y);
					break;
				}
				case 's':
				{
					engine->ShowImage("d_king.PNG", x, y);
					break;
				}
				break;
			}
			break;
		}
		break;
	}
}


void Game::ShowAllCards()
{
	players[PLAYER1].cardX = PLAYER1_X;
	players[PLAYER1].cardY = PLAYER1_Y;
	int extraY=0;
	
	for (int i=0;i < MAX_HAND; i++)
	{
		if (players[PLAYER1].hand[i].Selected == 1)
		{
			extraY= 10;
		}
		ShowCard(players[PLAYER1].hand[i].value, players[PLAYER1].hand[i].suit, players[PLAYER1].cardX, players[PLAYER1].cardY+extraY);
		players[PLAYER1].hand[i].x = players[PLAYER1].cardX - 30;
		players[PLAYER1].cardX += CARD_SPACE;
		extraY=0;
	}
	
	players[PLAYER2].cardY = PLAYER2_Y;
	
	for (int j=0;j<MAX_HAND;j++)
	{
		if (players[PLAYER2].hand[j].value != -1)
		{
			engine->ShowImageRotate("cardback.png",PLAYER2_X,players[1].cardY,90);
			players[PLAYER2].cardY +=10;
		}
	}
	
	players[PLAYER3].cardX = PLAYER3_X;
	
	for (int k=0;k<MAX_HAND;k++)
	{
		if (players[PLAYER3].hand[k].value != -1)
		{
			engine->ShowImage("cardback.png",players[PLAYER3].cardX, PLAYER3_Y);
			players[PLAYER3].cardX +=10;
		}
	}
	
	
	players[PLAYER4].cardX = PLAYER4_X;
	
	for (int k=0;k<MAX_HAND;k++)
	{
		if (players[PLAYER4].hand[k].value != -1)
		{
			engine->ShowImage("cardback.png",players[PLAYER4].cardX, PLAYER4_Y);
			players[PLAYER4].cardX +=10;
		}
	}
	
	players[PLAYER5].cardY = PLAYER5_Y;
	
	for (int k=0;k<MAX_HAND;k++)
	{
		if (players[PLAYER5].hand[k].value != -1)
		{
			engine->ShowImageRotate("cardback.png",PLAYER5_X,players[PLAYER5].cardY,90);
			players[PLAYER5].cardY -=10;
		}
	}
}

bool Game::isFreePlay()
{
	for (int i=0;i<FLOP_CARD_MAX;i++)
	{
		if (flopHistory->flop[flopHistory->count].cards[i].value != -1) return false;
	}
	return true;
}


int Game::GetPlayersLeft()
{
	int count=0;
	
	for (int i=0;i<MAXPLAYERS;i++)
	{
		if (players[i].isOut == false)
		{
			count++;
		}
	}
	return count;
}

void Game::PauseMode(int oldstate)
{
	mode = PAUSE;
	pauseLastState = oldstate;
	pauseCount=0;
}


void Game::EasyMode(int player)
{
	if (isFreePlay())
	{
		for (int i=0;i<MAX_HAND;i++)
		{
			if (players[player].hand[i].value != -1)
			{
				players[player].hand[i].Selected = 1;
				PlayCards(player);
				return ;
			}
		}
	}
	
	//if (flopHistory->flop[flopHistory->count].checkSequnce())
	//{
	//	NSLog(@"ggg");
	//} else {
	if (FlopCount() > 1)
	{
			/*
			for (int j=0;j<MAX_HAND;j++)
			{
				if (players[player].hand[J].value != -1)
				{
					for (int k=1;k<FlopCount();k++)
					{
						if (players[player].hand[k].value != -1)
						{
							if (players[player].hand[j].value > flopHistory->flop[flopHistory->c`ount].cards[0].value)
							{
								if (players[player].hand[j].value == players[player].hand[k].value)
								{
									//shimuri check goes here?
									players[player].hand[j].Selected = 1;
									players[player].hand[k].Selected = 1;
								}
							}
						}
					}
				}
			}
			 */
		} else {
			int tempValue=0;
			int tempValueTwo=0;
						
			for (int l=0;l<MAX_HAND;l++)
			{
				if (players[player].hand[l].value != -1)
				{
					tempValue = players[player].hand[l].value;
					
					
					tempValueTwo = flopHistory->flop[flopHistory->count].cards[0].value;
				
					if (tempValue == 1) tempValue = 14;
					if (tempValue == 2) tempValue = 15;
				
					if (tempValueTwo == 1) tempValueTwo = 14;
					if (tempValueTwo == 2) tempValueTwo = 15;
				
					if (tempValue > tempValueTwo)
					{
						players[player].hand[l].Selected = true;
						break;
					}
				}
			}
		}
	//}
		
	if (players[player].GetSelectionCount() > 0)
	{
		PlayCards(player);
	} else {
		Pass(player);
	}
}

void Game::Pass(int player)
{
	players[player].hasPassed = true;
	mode = PROCESS_MOVE;
}

/************************************************************************* GAME LOGIC*/



void Game::GameChangeState(int newGameState)
{
	gameState = newGameState;
}




void Game::ChangeState(int newState, int oldstate)
{
	state = newState;
	oldState = oldstate;
}


int Game::FlopCount()
{
	int count=0;
	for (int i=0;i<MAX_FLOP_HAND;i++)
	{
		if (flopHistory->flop[flopHistory->count].cards[i].value != -1) count++;
	}
	return count;
}

void Game::PlayCards(int player)
{
	int flopPos = 0;

	if (isFreePlay() == false)
	{
		flopHistory->count++;
	}
	
	for (int i=0;i<MAX_HAND;i++)
	{
		if (players[player].hand[i].Selected)
		{
			flopHistory->flop[flopHistory->count].cards[flopPos].value = players[player].hand[i].value;
			flopHistory->flop[flopHistory->count].cards[flopPos].suit = players[player].hand[i].suit;
			
			players[player].hand[i].value = -1;
			players[player].hand[i].suit = 'n';
			players[player].hand[i].Selected = false;
			
			
			flopPos++;
		}
	}	
	
	for (int p=0;p<MAXPLAYERS;p++)
	{
		if (players[p].isOut == false)
		{
			players[p].hasPassed = false;
		}
		
	}
	
	players[player].SortHand();
	mode = PROCESS_MOVE;
	roundHolder = player;
}

/*=====================================================================================================*/



void Game::LogicGameplay()
{
	
	switch (gameState)
	{
		case INIT_GAME:
		{
			flopHistory = new FlopHistory();
			flopHistory->count=0;

			
			
			engine->LoadImage("toru.png");
			engine->LoadImage("cardback.png");
			
			
			engine->LoadImage("c_ace.PNG");
			engine->LoadImage("c_two.PNG");
			engine->LoadImage("c_three.PNG");
			engine->LoadImage("c_four.PNG");
			engine->LoadImage("c_five.PNG");
			engine->LoadImage("c_six.PNG");
			engine->LoadImage("c_seven.PNG");
			engine->LoadImage("c_eight.PNG");
			engine->LoadImage("c_nine.PNG");
			engine->LoadImage("c_ten.PNG");
			engine->LoadImage("c_jack.PNG");
			engine->LoadImage("c_queen.PNG");
			engine->LoadImage("c_king.PNG");
			
			
			
			engine->LoadImage("d_ace.PNG");
			engine->LoadImage("d_two.PNG");
			engine->LoadImage("d_three.PNG");
			engine->LoadImage("d_four.PNG");
			engine->LoadImage("d_five.PNG");
			engine->LoadImage("d_six.PNG");
			engine->LoadImage("d_seven.PNG");
			engine->LoadImage("d_eight.PNG");
			engine->LoadImage("d_nine.PNG");
			engine->LoadImage("d_ten.PNG");
			engine->LoadImage("d_jack.PNG");
			engine->LoadImage("d_queen.PNG");
			engine->LoadImage("d_king.PNG");
			
			
			engine->LoadImage("h_ace.PNG");
			engine->LoadImage("h_two.PNG");
			engine->LoadImage("h_three.PNG");
			engine->LoadImage("h_four.PNG");
			engine->LoadImage("h_five.PNG");
			engine->LoadImage("h_six.PNG");
			engine->LoadImage("h_seven.PNG");
			engine->LoadImage("h_eight.PNG");
			engine->LoadImage("h_nine.PNG");
			engine->LoadImage("h_ten.PNG");
			engine->LoadImage("h_jack.PNG");
			engine->LoadImage("h_queen.PNG");
			engine->LoadImage("h_king.PNG");
			
			
			
			engine->LoadImage("s_ace.PNG");
			engine->LoadImage("s_two.PNG");
			engine->LoadImage("s_three.PNG");
			engine->LoadImage("s_four.PNG");
			engine->LoadImage("s_five.PNG");
			engine->LoadImage("s_six.PNG");
			engine->LoadImage("s_seven.PNG");
			engine->LoadImage("s_eight.PNG");
			engine->LoadImage("s_nine.PNG");
			engine->LoadImage("s_ten.PNG");
			engine->LoadImage("s_jack.PNG");
			engine->LoadImage("s_queen.PNG");
			engine->LoadImage("s_king.PNG");
			engine->LoadText("Play");
			engine->LoadText("Skip");
			
			engine->LoadImage("scoreboard.png");
			
			engine->LoadImage("cursor.png");
			engine->LoadImage("cat.png");
			engine->LoadImage("tiger.jpg");
			engine->LoadImage("boar.jpg");
			engine->LoadImage("dog.png");
			engine->LoadImage("rooster.png");
			
			engine->LoadText("1st");
			engine->LoadText("2nd");
			engine->LoadText("3rd");
			engine->LoadText("4th");
			engine->LoadText("5th");
			
			engine->LoadText("Player 1");
			engine->LoadText("Player 2");
			engine->LoadText("Player 3");
			engine->LoadText("Player 4");
			engine->LoadText("Player 5");
			
			engine->LoadText("Rankings");
			engine->LoadText("Tap on the screen to continue");

			
			rank[FIRST] = PLAYER1;
			rank[SECOND] = PLAYER2;
			rank[THIRD] = PLAYER3;
			rank[FOURTH] = PLAYER4;
			rank[FIFTH] = PLAYER5;
			Deck = new deck;
			round = 0;
			shuffles=0;
			cardCount=0;
			playerCount=0;
			handCount=0;
			turn = 0;
			pauseCount = 0;
			pauseLastState=-1;
			
			cursorX=320;
			cursorY=100;
			
			players[PLAYER1].cursorX = 320;
			players[PLAYER1].cursorY = 100;
			
			players[PLAYER2].cursorX = 75;
			players[PLAYER2].cursorY = 220;
			
			players[PLAYER3].cursorX = 180;
			players[PLAYER3].cursorY = 245;
			
			
			players[PLAYER4].cursorX = 280;
			players[PLAYER4].cursorY = 245;
			
			players[PLAYER5].cursorX = 405;
			players[PLAYER5].cursorY = 215;
			
			dealer = PLAYER5;
			winnersCount=0;
			mode = PLAYER_MOVE;
			isShimari = false;
			revolution=false;
			for (int i=0;i<MAXPLAYERS;i++)
			{
				winnersCircle[i] = -1;
			}
			
			GameChangeState(SHUFFLE);
			break;
		}
		case SHUFFLE:
		{
			if (shuffles > MAX_SHUFFLE)
			{
				GameChangeState(DEAL);
				break;
			}
			Deck->Shuffle();
			shuffles++;
			break;
		}
		case DEAL:
		{
			players[rank[playerCount]].hand[handCount].value = Deck->Cards[cardCount].value;
			players[rank[playerCount]].hand[handCount].suit = Deck->Cards[cardCount].suit;
			
			playerCount++;
			
			if (playerCount == MAXPLAYERS)
			{
				playerCount=0;
				handCount++;
			}
			
			cardCount++;
			
			if (cardCount == DECK_SIZE)
			{
				for (int o=0;o<MAXPLAYERS;o++)
				{
					players[o].SortHand();
				}
				GameChangeState(MAIN);
				break;
			}
			break;
		}
		case MAIN:
		{
			switch (mode)
			{
				case PLAYER_MOVE:
				{
						/*
						if (players[rank[turn]].isOut == false)
						{
							if (players[rank[turn]].hasPassed == TRUE) players[rank[turn]].hasPassed = FALSE;
						}*/
						
					NSLog(@"Player %i turn", rank[turn]);
						
					if (rank[turn] == PLAYER1 )
					{
					} else {
						/*do cpu ai here*/
						EasyMode(rank[turn]);
					}
					break;
				}
					
				case PROCESS_MOVE:
				{

						//check if current player is out
					if (players[rank[turn]].CheckIfOut())
					{
							
						if (players[rank[turn]].isOut == FALSE)
						{
				
							winnersCircle[winnersCount] = rank[turn];
							winnersCount++;
							players[rank[turn]].isOut = TRUE;
							players[rank[turn]].hasPassed = true;
								
							if (rank[turn] == roundHolder)
							{
								do
								{
									//turn++;
									if (turn > MAXPLAYERS)
									{
										turn = -1;
									}
										
					
									turn++;
								} while (players[rank[turn]].isOut == true);
								roundHolder = rank[turn];
								mode = ROUNDOVER;
								break;
							}
								
						} 
					}
						
					if (GetPlayersLeft()  < 1)
					{
						gameState=FINISHEDROUND;
						break;
					}
						
						
					//next players turn
					turn++;
						
						
					if (turn > MAXPLAYERS-1) turn=0;						
					//check if the next player is out or note
					while (turn < MAXPLAYERS)
					{
						if (players[rank[turn]].CheckIfOut())
						{
							turn++;
						} else {
							break;
						}
					}
					//check if everybody went
					//if (turn == MAXPLAYERS) turn=0;
						
						//check if everybody has passed or not
					int passCount=0;
						
						
					if (roundHolder != -1)
					{
						if (rank[turn] == roundHolder)
						{
							for (int p=0;p<MAXPLAYERS;p++)
							{
								if (players[rank[p]].isOut == false)
								{
									if (players[rank[p]].hasPassed == TRUE )
									{
										passCount++;
									}
								}
							}
						
							NSLog(@"Pass count=%i Players left: %i",passCount, GetPlayersLeft());
	
							if (passCount == GetPlayersLeft())
							{
								if (players[roundHolder].isOut)
								{
									NSLog(@"is out!!");
									do
									{
									
										if (turn > MAXPLAYERS)
										{
											turn = 0;
										}
											
										turn++;
							
									} while (players[rank[turn]].isOut == true);
								}
								for (int p=0;p<FLOP_CARD_MAX;p++)
								{
									flopHistory->flop[flopHistory->count].cards[p].value = -1;
									flopHistory->flop[flopHistory->count].cards[p].suit = 'n';
								}
								mode = ROUNDOVER;
								break;
							}
							if (passCount == GetPlayersLeft()-1)
							{

								for (int p=0;p<FLOP_CARD_MAX;p++)
								{
									flopHistory->flop[flopHistory->count].cards[p].value = -1;
									flopHistory->flop[flopHistory->count].cards[p].suit = 'n';
								}
								mode = ROUNDOVER;
								break;
							}
						}
					}
					
					
					PauseMode(PLAYER_MOVE);
						
						
					
						
					break;
				}
				case ROUNDOVER:
				{
						
					/* check if eveybodyis out */
					int outCount=0;
					bool allOut=true;
						
					if (GetPlayersLeft() == 1)
					{
						gameState=FINISHEDROUND;
						allOut=true;
						break;
					}
						/* checkwho held the round*/
					int newRank[MAXPLAYERS];
					int playersIndex=0;
						
					for ( playersIndex=0;playersIndex<MAXPLAYERS;playersIndex++)
					{
						if (players[rank[playersIndex]].isOut == false)
						{
							if (rank[playersIndex] == roundHolder)
							{
								break;
							}
						}
					}
		
					for (int k=0;k < MAXPLAYERS;k++)
					{
						
						if (players[rank[k]].isOut == false)
						{
							players[rank[k]].hasPassed = false;
						} else {
							players[rank[k]].hasPassed = true;
						}
					}
					
					
					PauseMode(PLAYER_MOVE);
				
					/*change mode to PLAYERSMOVE*/
					break;
				}
				case PAUSE:
				{
					if (pauseCount == pauseLength)
					{
						mode = pauseLastState;
						break;
					}
					pauseCount++;
					break;
				}
				break;
					
			}
			break;
		}
		case FINISHEDROUND:
		{
			/*Get the last player*/
			for (int i=0;i<MAXPLAYERS;i++)
			{
				if (players[i].isOut == false)
				{
					winnersCircle[winnersCount] = i;
					break;
				}
			}
			// put winnerCircle into Rank
			for (int j=0;j<MAXPLAYERS;j++)
			{
				rank[j] = winnersCircle[j];
				winnersCircle[j] = -1;
			}
		
				//clear players hand
			for (int k=0;k<MAXPLAYERS;k++)
			{
				for (int l=0;l<MAX_HAND;l++)
				{
					players[k].hand[l].value = -1;
					players[k].hand[l].suit = 'n';
					players[k].hand[l].Selected = false;
					players[k].hasPassed = false;
					players[k].isOut = false;
				}
			}
				
			for (int l=0;l<DECK_SIZE;l++)
			{
				for (int m=0;m<MAX_FLOP_HAND;m++)
				{
					flopHistory->flop[l].cards[m].value = -1;
					flopHistory->flop[l].cards[m].suit='\n';
				}
			}
				
			winnersCount=0;
			pauseCount=0;
			flopHistory->count = 0;
			isShimari = false;
			turn=0;
			roundHolder=-1;
			isRevolution=false;
			round = 0;
			shuffles=0;
			cardCount=0;
			playerCount=0;
			handCount=0;
			turn = 0;
			Deck->CreateDeck();
			GameChangeState(SHOWRANKINGS);
			break;
		}
		case SHOWRANKINGS:
		{
			break;
		}
		case SWAPCARDS:
		{
				/*
				 This assures that the lowest ranking players will receive the most cards if there are more than four participants. 
				 The Poor Man gives his best card to the Rich Man in return for the Rich Man's worst card. 
				 Play then continues as it did to open the game.
				 */
				
			break;
		}
		
		break;
	}
}

/***************************************************** GAME CONTROLS*/

void Game::HandleControl()
{
	touchedXY.x = engine->pressedXY.x;
	touchedXY.y = engine->pressedXY.y;
	
	switch (gameState)
	{
		case INIT_GAME:
		{
			break;
		}
		case SHUFFLE:
		{
			break;
		}
		case DEAL:
		{
			break;
		}
		case MAIN:
		{
			switch (mode)
			{
				case PLAYER_MOVE:
				{
					if (rank[turn] == PLAYER1)
					{
						for (int i=0; i < MAX_HAND;i++)
						{
							/*see what card is being touched*/
							if (touchedXY.x > players[PLAYER1].hand[i].x && touchedXY.x < players[PLAYER1].hand[i].x+CARD_SPACE && touchedXY.y > 217 && touchedXY.y < 282 && engine->hasBeenPressed)
							{
								engine->hasBeenPressed = false;
							
								if (players[PLAYER1].isCardVaild(i))
								{
									if (players[PLAYER1].isCardSelected(i))
									{
										players[PLAYER1].SelectCard(i,FALSE);
									} else {
										players[PLAYER1].SelectCard(i,TRUE);
									}
								}
								touchedXY.x = -1; 
								touchedXY.y = -1;
							}
							
							/*Play button*/
							if (touchedXY.x > 356 && touchedXY.x < 425 && touchedXY.y > 214 && touchedXY.y < 231 && engine->hasBeenPressed)
							{				
								NSLog(@"touched");
								if (players[PLAYER1].GetSelectionCount() !=0)
								{
									NSLog(@"cards are selected");
									if (players[PLAYER1].hasRevolution() && revolution)
									{
										PlayCards(PLAYER1);
										revolution=true;
									} else 
									if (players[PLAYER1].IsHandValueSame())
									{
										if (isFreePlay())
										{
											PlayCards(PLAYER1);

										} else 
										if (players[PLAYER1].GetSelectionCount() == FlopCount())
										{
											if (shimari)
											{
												if (isShimari)
												{
													
													if (players[PLAYER1].hasShimari(flopHistory->flop[flopHistory->count].cards))
													{
														if (revolution)
														{
															if (players[PLAYER1].isLessThenFlop(flopHistory->flop[flopHistory->count].cards))
															{
																PlayCards(PLAYER1);
															}
														} else 
														if (players[PLAYER1].isGreaterThanFlop(flopHistory->flop[flopHistory->count].cards))
														{
															PlayCards(PLAYER1);
														}
													}
												} else
												if (revolution)
												{
													if (players[PLAYER1].isLessThenFlop(flopHistory->flop[flopHistory->count].cards))
													{
														PlayCards(PLAYER1);
													}
												} else
												if ( players[PLAYER1].isGreaterThanFlop(flopHistory->flop[flopHistory->count].cards))
												{
													NSLog(@"should be here");
													PlayCards(PLAYER1);
												}
													
												/*sequnice*/
											} else {
												
											/* is shimari us off*/
												if (revolution)
												{
													if (players[PLAYER1].isLessThenFlop(flopHistory->flop[flopHistory->count].cards))
													{
														PlayCards(PLAYER1);
													}
												} else
												if (players[PLAYER1].isGreaterThanFlop(flopHistory->flop[flopHistory->count].cards) )
												{
													PlayCards(PLAYER1);
												} else {
												}
													
												/*sequnice*/
											}
										}
									} else {
										if (isFreePlay())
										{
											if (players[PLAYER1].CheckSeq())
											{
												PlayCards(PLAYER1);
											}
										} else 
										if (players[PLAYER1].GetSelectionCount() == FlopCount())
										{
											if (flopHistory->flop[flopHistory->count].checkSequnce())
											{
												if (players[PLAYER1].CheckSeq())
												{
													if (players[PLAYER1].SeqCheck(flopHistory->flop[flopHistory->count].cards))
													{
														PlayCards(PLAYER1);
													}
												}
											}
										}
									}
								}
								for (int z=0;z<MAX_HAND;z++)
								{
									NSLog(@"%i", players[PLAYER1].hand[z].value);
								}
								engine->hasBeenPressed = false;
								touchedXY.x = -1;
								touchedXY.y = -1;
							
							}
							
						}
						
						
						if (touchedXY.x > 356 && touchedXY.x < 425 && touchedXY.y > 247 && touchedXY.y < 264 && engine->hasBeenPressed)
						{
							Pass(PLAYER1);
							engine->hasBeenPressed = false;
						}
						
						
					}
					break;
				}
				case PROCESS_MOVE:
				{
					break;
				}
			
			}
			break;
		}
		case FINISHEDROUND:
		{
			break;
		}
		case SHOWRANKINGS:
		{
			if (engine->hasBeenPressed)
			{
				mode = PLAYER_MOVE;
				gameState = SHUFFLE;
				engine->hasBeenPressed= false;
			}
			break;
		}
		case SWAPCARDS:
		{
			break;
		}
	}
	
	
	
}

/*========================================================================== GAMEPLAY RENDER ==================*/

void Game::RenderGameplay()
{
	engine->ShowImage("Background.png", TITLE_IMAGE_X , TITLE_IMAGE_Y);
	switch (gameState)
	{
		case INIT_GAME:
		{
			
			break;
		}
		case SHUFFLE:
		{
			engine->ShowImage("toru.png", 240,160);
			engine->ShowText((char*) "Shuffing Cards", 170, 160 );
			
			break;
		}
		case DEAL:
		{
			engine->ShowImage("cat.png", 320, 100);
			engine->ShowImage("tiger.jpg", 75, 220);
			engine->ShowImage("boar.jpg", 180, 245);
			engine->ShowImage("dog.png", 280, 245);
			engine->ShowImage("rooster.png", 405, 215);
			ShowAllCards();
			break;
		}
		case MAIN:
		{
			ShowAllCards();
			
			for (int i=0;i<FLOP_CARD_MAX;i++)
			{
				if (flopHistory->flop[flopHistory->count].cards[i].value != -1)
				{
					ShowCard(flopHistory->flop[flopHistory->count].cards[i].value,flopHistory->flop[flopHistory->count].cards[i].suit,FLOP_POSITION_X+(CARD_SPACE*i), FLOP_POSITION_Y);
				}
			}
			
			engine->ShowImage("cat.png", 320, 100);
			engine->ShowImage("tiger.jpg", 75, 220);
			engine->ShowImage("boar.jpg", 180, 245);
			engine->ShowImage("dog.png", 280, 245);
			engine->ShowImage("rooster.png", 405, 215);
			engine->ShowImage("cursor.png", players[rank[turn]].cursorX,players[rank[turn]].cursorY);

			
			switch (mode)
			{
				case PLAYER_MOVE:
				{
					if (rank[turn] == PLAYER1)
					{
						engine->ShowText("Play", 380, 80);
						engine->ShowText("Skip",380, 48);
					} else {
					}
					break;
				}
				case PROCESS_MOVE:
				{
					
					break;
				}
		
				break;
			}
			
			break;
		}
		case FINISHEDROUND:
		{
			
			break;
		}
		case SHOWRANKINGS:
		{
			engine->ShowImage("scoreboard.png", 200, 150);
			engine->ShowText("Rankings",130, 270);
			engine->ShowText("1st", 100, 200);
			engine->ShowText("2nd", 100, 170);
			engine->ShowText("3nd", 100, 140);
			engine->ShowText("4nd", 100, 110);
			engine->ShowText("5nd", 100, 80);
			
			int playersy=200;
			
			for (int i=0;i<MAXPLAYERS;i++)
			{
				switch (rank[i])
				{
					case 0:
					{
						engine->ShowText("Player 1", 190, playersy);
						break;
					}
					case 1:
					{
						engine->ShowText("Player 2", 190, playersy);
						break;
					}
					case 2:
					{
						engine->ShowText("Player 3", 190, playersy);
						break;
					}
					case 3:
					{
						engine->ShowText("Player 4", 190, playersy);
						break;
					}
					case 4:
					{
						engine->ShowText("Player 5", 190, playersy);
						break;
					}
				}
				playersy -= 30;
			}
			engine->ShowText("Tap to continue",80,10);
			//engine->ShowText("Player1", 190, 200);
			//.engine->ShowText("Player2", 190, 170);
			
			
			break;
		}
	}

}

Game::~Game()
{
	delete Deck;
	Deck=NULL;
	
	delete engine;
	engine = NULL;
}

