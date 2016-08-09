/*
 *  deck.cpp
 *  rmpm
 *
 *  Created by meow meowington on 12/21/12.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#include "deck.h"

deck::deck()
{


	CreateDeck();
	srand ( time(NULL) );

}

void deck::Shuffle()
{
	
	int count=0;
	card firstDeckHalf[DECK_SIZE];
	card secondDeckHalf[DECK_SIZE];
	card tempDeck[DECK_SIZE];

	
	int cutPoint = rand() % DECK_SIZE;

	int deckRemandier= DECK_SIZE - cutPoint;
	
	int divided = 0;
	int remain = 0;
	
	
	for (int i=0;i<cutPoint;i++)
	{
		firstDeckHalf[i].value = Cards[i].value;
		firstDeckHalf[i].suit = Cards[i].suit;
	}
	for (int j=cutPoint;j < DECK_SIZE;j++)
	{
		secondDeckHalf[count].value = Cards[j].value;
		secondDeckHalf[count].suit = Cards[j].suit;
		count++;
	}
	

	for (int k=0;k<deckRemandier;k++)
	{
		Cards[k].value = secondDeckHalf[k].value;
		Cards[k].suit = secondDeckHalf[k].suit;
	}
	
	count=deckRemandier;
	
	for (int l=0;l < cutPoint;l++)
	{
		Cards[count].value = firstDeckHalf[l].value;
		Cards[count].suit = firstDeckHalf[l].suit;
		count++;
	}
	
	
	divided = DECK_SIZE / 2;
	remain = DECK_SIZE % 2;
	/*
	
	
	for (int m=divided;m < DECK_SIZE;m+=cutPoint)
	{
			for (int n=DECK_SIZE;n > -1;n--)
			{
				int tempValue=0;
				char tempSuit='\0';
			
				tempValue = Cards[m].value;
				tempSuit = Cards[m].suit;
			
			
				Cards[m].value = Cards[n].value;
				Cards[m].suit = Cards[n].suit;
			
				Cards[n].value = tempValue;
				Cards[n].suit = tempSuit;
		
			}
	
	}
	
	*/
	for (int o=0;o<DECK_SIZE;o+=2)
	{
		int tempValue=Cards[o].value;
		char tempSuit=Cards[o].suit;
		
		Cards[o].value = Cards[o+1].value;
		Cards[o].suit = Cards[o+1].suit;
		
		Cards[o+1].value = tempValue;
		Cards[o+1].suit = tempSuit;
		
	}
	
	

	
}

void deck::CreateDeck()
{
	int cardValue=1;
	
	
	for (int i=0; i < DECK_SIZE;i+=4)
	{
		Cards[i].value = cardValue;
		Cards[i].suit = 'h';
		
		Cards[i+1].value =cardValue;
		Cards[i+1].suit = 'd';
		
		Cards[i+2].value =cardValue;
		Cards[i+2].suit = 's';
		
		Cards[i+3].value =cardValue;
		Cards[i+3].suit = 'c';
		
		cardValue++;
		if (cardValue == 14) cardValue=0;
	}
}