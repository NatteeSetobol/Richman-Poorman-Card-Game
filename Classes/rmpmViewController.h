//
//  rmpmViewController.h
//  rmpm
//
//  Created by meow meowington on 12/16/12.
//  Copyright __MyCompanyName__ 2012. All rights reserved.
//

#import <UIKit/UIKit.h>
#include "OpenGLES2DView.h"
#include "Game.h"
#include <pthread.h>

@interface rmpmViewController : UIViewController {
	Game* RMPM;
}

@property ( nonatomic) Game* RPMPM;
-(void) mainGameLoop;

@end

