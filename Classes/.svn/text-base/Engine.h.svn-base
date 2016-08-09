/*
 *  Engine.h
 *  rmpm
 *
 *  Created by meow meowington on 12/17/12.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */
#ifndef ENGINE_H
#define ENGINE_H

#import "OpenGLES2DView.h"
#import "MyTexture2D.h"

struct cord
{
	int x;
	int y;
};

class Engine
{
	public:
		Engine();
		~Engine();
		/*iOS stuff*/
		EAGLContext *context;
		GLuint renderBuffer;
		SInt32    result;
	
		NSMutableDictionary* imageContainer;
		NSMutableDictionary* textContainer;
	   
		MyTexture2D* font;
	
		cord pressedXY;
	
		bool hasBeenPressed;
	
		bool freeLoop(float gamespeed);
		void setEngine(OpenGLES2DView* view);
		void startRender();
		void endRender();
		void LoadImage(char* filename);
		void DeleteImage(char* filename);
		void LoadText(char* text);
		void ShowImage(char* filename, int x, int y);
		void ShowImageRotate(char* filename, int x, int y, int degrees);
		void ShowText(char* textString, int x, int y);
		void LoadCustomFont(char* fullSheet, char* sheetCords); 
		bool GetPressed(int x, int y);

};
#endif

