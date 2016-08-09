/*
 *  Engine.cpp
 *  rmpm
 *
 *  Created by meow meowington on 12/17/12.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#include "Engine.h"

Engine::Engine()
{
	imageContainer = [[NSMutableDictionary alloc] init];
	textContainer = [[NSMutableDictionary alloc] init];
	LoadCustomFont("fonts.png", "fonts.txt");
	hasBeenPressed = false;
}

Engine::~Engine()
{
	[imageContainer release];
	imageContainer = nil;
	
	[textContainer release];
	textContainer=nil;
}

void Engine::setEngine(OpenGLES2DView* view)
{
	context = view->context;
	renderBuffer = view->viewRenderbuffer;
	
	//text = [[Texture2D alloc] initWithImage:[UIImage imageNamed:@"rmpm.png"]];
	
}

bool Engine::freeLoop(float gamespeed)
{
	while(result = CFRunLoopRunInMode(kCFRunLoopDefaultMode, gamespeed, NO) == kCFRunLoopRunHandledSource);
	// = CFRunLoopRunInMode(kCFRunLoopDefaultMode, Gspeed, YES);
	
	if ((result == kCFRunLoopRunStopped) || (result == kCFRunLoopRunFinished))
	{
		return true;
		
	}
	return false;
}

void Engine::startRender()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glEnable(GL_TEXTURE_2D);
	glEnable(GL_BLEND);
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_COMBINE);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glColor4f( 1.0f, 1.0f, 1.0f, 1.0f );
}

void Engine::endRender()
{
	glBindRenderbufferOES(GL_RENDERBUFFER_OES, renderBuffer);
	[context presentRenderbuffer:GL_RENDERBUFFER_OES];
}

void Engine::LoadImage(char* filename)
{
	NSString* filenameNS = [[NSString alloc] initWithFormat:@"%s", filename];
	MyTexture2D* image = [[MyTexture2D alloc] initWithImage:[UIImage imageNamed:filenameNS]];
	[imageContainer setObject:image forKey:filenameNS];
	[filenameNS release];
	filenameNS = nil;
	[image release];
	image = nil;
}


void Engine::DeleteImage(char* filename)
{
	NSString* filenameNS = [[NSString alloc] initWithFormat:@"%s", filename];
	MyTexture2D* image = [imageContainer objectForKey: filenameNS];
	[image release];
	image = NULL;
	[imageContainer removeObjectForKey:filenameNS];
}

void Engine::LoadText(char* text)
{
	NSString* textNS = [[NSString alloc] initWithFormat:@"%s", text];
	MyTexture2D* thetext = [[MyTexture2D alloc] initWithString:textNS dimensions:CGSizeMake(270, 100) alignment:UITextAlignmentLeft fontName:@"arial" fontSize:20];
	[textContainer setObject:thetext forKey:textNS];
	
	[textNS release];
	textNS = NULL;
	[thetext release];
	thetext = NULL;
}


void Engine::LoadCustomFont(char* fullSheet, char* sheetCords)
{
	NSString* image = [[NSString alloc] initWithFormat:@"%s",fullSheet];
	NSString* imageCords = [[NSString alloc] initWithFormat:@"%s", sheetCords];
	
	
	font = [[MyTexture2D alloc] initWithImage:[UIImage imageNamed:image] atlasFilename: imageCords ];
	
	[image release];
	image = nil;
	
	[imageCords release];
	imageCords = nil;
	
	
}

void Engine::ShowImage(char* filename, int x, int y )
{
	NSString* filenameNS = [[NSString alloc] initWithFormat:@"%s", filename];
	MyTexture2D* image = [imageContainer objectForKey: filenameNS];
	if (image)
	{
		//[image drawAtPoint:CGPointMake(x, y) rotatedBy: 90 ];
		[image drawAtPoint:CGPointMake(x, y)];
		[filenameNS release];
		filenameNS = nil;
	}
}



void Engine::ShowImageRotate(char* filename, int x, int y, int degrees)
{
	NSString* filenameNS = [[NSString alloc] initWithFormat:@"%s", filename];
	MyTexture2D* image = [imageContainer objectForKey: filenameNS];
	if (image)
	{
		[image drawAtPoint:CGPointMake(x, y) rotatedBy: degrees ];
		//[image drawAtPoint:CGPointMake(x, y)];
		[filenameNS release];
		filenameNS = nil;
	}
}

void Engine::ShowText(char* textString, int x, int y)
{
	int newX = x;
	
	for (int i=0; i < strlen(textString); i++)
	{
		NSString* textStringNS = [[NSString alloc] initWithFormat:@"%c", textString[i]];
		[font showframebykey:textStringNS :newX:y];
		newX+=20;
		[textStringNS release];
		textStringNS = nil;
	}
}

bool Engine::GetPressed(int x, int y)
{
	
	pressedXY.x = x;
	pressedXY.y = y;
	
	return false;
}