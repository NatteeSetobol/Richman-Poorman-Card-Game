/*
 *  Flop.cpp
 *  rmpm
 *
 *  Created by meow meowington on 1/5/13.
 *  Copyright 2013 __MyCompanyName__. All rights reserved.
 *
 */

#include "Flop.h"

Flop::Flop()
{
	for (int i=0;i<MAX_HAND;i++)
	{
		cards[i].value = -1;
		cards[i].suit = 'n';
	}
}

int Flop::	FlopCount()
{
	int count=0;
	for (int i=0;i<MAX_HAND;i++)
	{
		if (cards[i].value != -1) count++;
	}
	return count;
}

void Flop::SwapCards(int swap, int with)
{
	int tempValue=cards[swap].value;
	char tempChar=cards[swap].suit;
	int tempSel= cards[swap].Selected;
	int tempCardX=cards[swap].x;
	
	cards[swap].value = cards[with].value;
	cards[swap].suit = cards[with].suit;
	cards[swap].Selected = cards[with].Selected;
	cards[swap].x = cards[with].x;
	
	cards[with].value = tempValue;
	cards[with].suit = tempChar;
	cards[with].Selected = tempSel;
	cards[with].x = tempCardX;	
}


void Flop::SortCards()
{
	card tempCards[MAX_HAND];
	int tempCount=0;
	
	for (int k=0;k<MAX_FLOP_HAND;k++)
	{
		for (int l=0;l<MAX_FLOP_HAND;l++)
		{
			if (cards[k].value == -1 && cards[l].value != -1)
			{
				SwapCards(k, l);
				
			}
		}
	}
	for (int i=0;i<MAX_FLOP_HAND;i++)
	{
		for (int j=0;j<MAX_FLOP_HAND;j++)
		{
			if (cards[i].value != 0 && cards[i].value != -1)
			{
				if (cards[i].value < cards[j].value)
				{
					if (cards[i].value != 1 || cards[i].value != 2)
					{ 
						if (cards[i].value != 1 || cards[j].value != 2) 
						{
							SwapCards(i,j);
						}
					}
				} 
				if (cards[j].value == 2)
				{
					SwapCards(i, j);   
				} else
				if (cards[j].value == 1 && cards[i].value == 1)
				{
					SwapCards(i, j);  
				} else
				if (cards[j].value == 1 && cards[i].value == 2)
				{
				} else
				if (cards[j].value == 1)
				{
					SwapCards(i, j);  
				}
			}
		}
	}

	for (int o=0;o<MAX_FLOP_HAND;o++)
	{
			tempCards[o].value = -1;
			tempCards[o].suit = 'n';

	}
	
	
	for (int k=0;k<MAX_FLOP_HAND;k++)
	{
		if (cards[k].value != -1)
		{
			tempCards[tempCount].value = cards[k].value;
			tempCards[tempCount].suit = cards[k].suit;
			tempCount++;
		}
	}
	
	for (int l=0;l<MAX_FLOP_HAND;l++)
	{
		cards[l].value = -1;
		cards[l].suit = 'n';
	}
	
	for (int m=0;m<MAX_FLOP_HAND;m++)
	{
		cards[m].value = tempCards[m].value;
		cards[m].suit = tempCards[m].suit;
	}

}

bool Flop::checkSequnce()
{
	int tempValue=0;
	int tempValueTwo=0;
	
	
	SortCards();
	
	for (int i=0;i<FlopCount()-1; i++)
	{
		
		tempValue = cards[i+1].value;
		tempValueTwo = cards[i].value+1;
		
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