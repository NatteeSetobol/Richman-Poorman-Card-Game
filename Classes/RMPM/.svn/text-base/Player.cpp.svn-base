/*
 *  Player.cpp
 *  rmpm
 *
 *  Created by meow meowington on 1/2/13.
 *  Copyright 2013 __MyCompanyName__. All rights reserved.
 *
 */

#include "Player.h"

Player::Player()
{
	for (int i=0;i<MAX_HAND;i++)
	{
		hand[i].value = -1;
		hand[i].suit = 'n';
		hand[i].Selected = FALSE;
	}
	isOut=false;
	hasPassed=false;
	points = 0;
}

void Player::SortHand()
{
	card tempHand[MAX_HAND];
	int tempCount=0;
	
	for (int k=0;k<MAX_HAND;k++)
	{
		for (int l=0;l<MAX_HAND;l++)
		{
			if (hand[k].value == -1 && hand[l].value != -1)
			{
				SwapCards(k, l);
				
			}
		}
	}
	for (int i=0;i<MAX_HAND;i++)
	{
		for (int j=0;j<MAX_HAND;j++)
		{
			if (hand[i].value != 0 && hand[i].value != -1)
			{
				if (hand[i].value < hand[j].value)
				{
					if (hand[i].value != 1 || hand[i].value != 2)
					{ 
						if (hand[i].value != 1 || hand[j].value != 2) 
						{
							SwapCards(i,j);
						}
					}
				} 
				if (hand[j].value == 2)
				{
					SwapCards(i, j);   
				} else
				if (hand[j].value == 1 && hand[i].value == 1)
				{
					SwapCards(i, j);  
				} else
				if (hand[j].value == 1 && hand[i].value == 2)
				{
				} else
				if (hand[j].value == 1)
				{
					SwapCards(i, j);  
				}
			}
		}
	}
	/*
	for (int k=0;k<MAX_HAND;k++)
	{
		if (hand[k].value != -1)
		{
			tempHand[tempCount].value= hand[k].value;
			tempHand[tempCount].suit = hand[k].suit;
			tempCount++;
		}
	}
	
	for (int l=0;l<MAX_HAND;l++)
	{
		hand[l].value = -1;
		hand[l].suit = 'n';
	}
	
	for (int m=0;m<MAX_HAND;m++)
	{
		hand[m].value = tempHand[m].value;
		hand[m].suit = tempHand[m].suit;
	}
	 */
}

void Player::SwapCards(int swap, int with)
{
	int tempValue=hand[swap].value;
	char tempChar=hand[swap].suit;
	int tempSel= hand[swap].Selected;
	int tempCardX=hand[swap].x;
	
	hand[swap].value = hand[with].value;
	hand[swap].suit = hand[with].suit;
	hand[swap].Selected = hand[with].Selected;
	hand[swap].x = hand[with].x;
	
	hand[with].value = tempValue;
	hand[with].suit = tempChar;
	hand[with].Selected = tempSel;
	hand[with].x = tempCardX;
	
}

bool Player::isCardVaild(int cardNumber)
{
	if (hand[cardNumber].value != -1) return true;
	return false;
}


bool Player::isCardSelected(int cardNumber)
{
	return hand[cardNumber].Selected;
}

void Player::SelectCard(int cardNumber, int selectPhase)
{
	hand[cardNumber].Selected = selectPhase;
}

int Player::GetSelectionCount()
{
	int selectionCount=0;
	
	for (int i=0;i<MAX_HAND;i++)
	{
		if (hand[i].Selected == 1 && hand[i].value != -1)
		{
			selectionCount++;
		}
	}
	return selectionCount;
}

bool Player::hasRevolution()
{
	int firstValue=-1;
	
	if (GetSelectionCount() != 4) return false;
	
	
	for (int i=0;i < MAX_HAND;i++)
	{
		if (hand[i].Selected == 1 && hand[i].value != -1)
		{
			if (firstValue == -1)
			{
				firstValue = hand[i].value;
			} else 
			if (firstValue != hand[i].value)
			{
				return false;
			}
		}
	}
	
	return true;
}

bool Player::hasShimari(card* flop)
{
	for (int i=0; i < MAX_FLOP_HAND;i++)
	{
		if (flop[i].value != -1 && hand[i].value != -1)
		{
			if (flop[i].suit != hand[i].suit)
			{
				return false;
			}
		}
	}
	return true;
}


bool Player::IsHandValueSame()
{
	int firstValue=-1;
	
	for (int i=0;i<MAX_HAND;i++)
	{
		if (hand[i].value != -1)
		{
			if (hand[i].Selected == 1)
			{
				if (firstValue == -1)
				{
					firstValue = hand[i].value;
				} else 
					if (firstValue != hand[i].value) return false;
			}
		}
	}
	return true;
}

bool Player::isLessThenFlop(card* flop)
{
	for (int i=0;i<MAX_HAND;i++)
	{
		if (hand[i].value != -1)
		{
			if (hand[i].Selected == 1)
			{
				for (int j=0;j<MAX_HAND;j++)
				{
					if (flop[j].value != -1)
					{
						/*
						if (flop[j].value == 2) return false;
						if (hand[i].value == 2 && flop[j].value != 2) return true;
						if (flop[j].value == 1) return false;
						if (hand[i].value == 1) return true;
						*/
						if (hand[i].value > flop[j].value) return false;
					}
				}
			}
		}
	}
	return true;
}


bool Player::isGreaterThanFlop(card* flop)
{
	for (int i=0;i<MAX_HAND;i++)
	{
		if (hand[i].value != -1)
		{
			if (hand[i].Selected == 1)
			{
				for (int j=0;j<MAX_HAND;j++)
				{
					if (flop[j].value != -1)
					{
						
						if (flop[j].value == 2) return false;
						if (hand[i].value == 2 && flop[j].value != 2) return true;
						if (flop[j].value == 1) return false;
						if (hand[i].value == 1) return true;
			
						if (hand[i].value < flop[j].value) return false;
					}
				}
			}
		}
	}
	return true;
}


bool Player::CheckSeq()
{
	//card tempSeq[MAX_HAND];
	int tempCount=0;
	int tempValue=0;
	int tempValueTwo=0;
	
	if (GetSelectionCount() < 3) return false;
	
	/*clear temp cards*/
	for (int j=0;j<MAX_HAND;j++)
	{
		tempCard[j].value = -1;
		tempCard[j].suit = 'n';
	}
	
	/*Get selected card*/

	for (int i=0;i<MAX_HAND;i++)
	{
		if (hand[i].value != -1)
		{
			if (hand[i].Selected == 1)
			{
				tempCard[tempCount].value = hand[i].value;
				tempCard[tempCount].suit = hand[i].suit;
				tempCount++;
			}
		}
	}
	
	for (int k=0;k<tempCount-1;k++)
	{

		tempValue = tempCard[k+1].value;
		tempValueTwo = tempCard[k].value+1;
		
		if (tempValue == 1)
		{
			tempValue = 14;
		}
		if (tempValue == 2)
		{
			tempValue = 15;
		}
		
		if (tempValueTwo == 1)
		{
			tempValueTwo = 14;
		} 
		if (tempValueTwo == 2)
		{
			tempValueTwo = 15;
		}
		
		if (tempValue != tempValueTwo) return false;
				
	}
	return true;
}

void Player::SwapTempCards(int swap, int with)
{
	int tempValue=tempCard[swap].value;
	char tempChar=tempCard[swap].suit;
	int tempSel= tempCard[swap].Selected;
	int tempCardX=tempCard[swap].x;
	
	tempCard[swap].value = tempCard[with].value;
	tempCard[swap].suit = tempCard[with].suit;
	tempCard[swap].Selected = tempCard[with].Selected;
	tempCard[swap].x = tempCard[with].x;
	
	tempCard[with].value = tempValue;
	tempCard[with].suit = tempChar;
	tempCard[with].Selected = tempSel;
	tempCard[with].x = tempCardX;
	
}

bool Player::SeqCheck(card* flop)
{
	int lastValue=0;
	int highestFlopValue=0;
	
	for (int i=0;i<MAX_HAND;i++)
	{
		if (hand[i].value != -1)
		{
			if (hand[i].Selected == 1)
			{
				if (lastValue < hand[i].value)
				{
					lastValue = hand[i].value;
				}
			}
		}
	}
	
	for (int j=0;j<MAX_FLOP_HAND;j++)
	{
		if (flop[j].value != -1)
		{
			if (highestFlopValue < flop[j].value)
			{
				highestFlopValue = flop[j].value;
			}
		}
	}
	
	if (lastValue == 1) lastValue = 14;
	if (lastValue == 2) lastValue = 15;
	if (highestFlopValue == 1) highestFlopValue = 14;
	if (highestFlopValue == 2) highestFlopValue = 15;
	
	if (highestFlopValue > lastValue) return false;
	
	return true;
}

int Player::RePositionCards()
{
	int startAtX=70;
	
	for (int i=0;i<MAX_HAND;i++)
	{
		hand[i].x = startAtX;
		startAtX+=20;
	}
	return 0;
}


bool Player::CheckIfOut()
{
	for (int i=0;i<MAX_HAND;i++)
	{
		if (hand[i].value != -1) return false;
	}
	return true;
}
