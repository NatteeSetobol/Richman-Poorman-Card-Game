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
	engine = new Engine();
	engine->LoadImage("rmpm.png");
}



void Game::run( )
{

	bool isDone=false;
	do
	{
		if (engine->freeLoop(0.132)) isDone = true;
		
		engine->startRender();
		
		engine->ShowImage("rmpm.png", 150, 230);
		
		engine->endRender();
		
		
	} while(!isDone);
}




Game::~Game()
{
	delete engine;
	engine = NULL;
}

