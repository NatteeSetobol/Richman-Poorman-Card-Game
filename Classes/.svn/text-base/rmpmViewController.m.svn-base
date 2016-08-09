//
//  rmpmViewController.m
//  rmpm
//
//  Created by meow meowington on 12/16/12.
//  Copyright __MyCompanyName__ 2012. All rights reserved.
//

#import "rmpmViewController.h"

@implementation rmpmViewController


/*
// The designated initializer. Override to perform setup that is required before the view is loaded.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if ((self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil])) {
        // Custom initialization
    }
    return self;
}
*/

/*
// Implement loadView to create a view hierarchy programmatically, without using a nib.
- (void)loadView {
}
*/




// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
    [super viewDidLoad];
	 RMPM = new Game();
	 RMPM->engine->setEngine( (OpenGLES2DView*) self.view);
	
	
	NSTimer* gameLoopTimer = [NSTimer scheduledTimerWithTimeInterval:1.0/60 target:self selector:@selector(mainGameLoop) userInfo:nil repeats:YES];

}




// Override to allow orientations other than the default portrait orientation.
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Return YES for supported orientations
    return TRUE;
}


- (void)didReceiveMemoryWarning {
	// Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
	
	// Release any cached data, images, etc that aren't in use.
}

- (void)viewDidUnload {
	// Release any retained subviews of the main view.
	// e.g. self.myOutlet = nil;
}


-(void) mainGameLoop
{
	 RMPM->run();
}


- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event 
{
	UITouch *touch = [touches anyObject];

	
}

- (void)touchesMoved:(NSSet *)touches withEvent:(UIEvent *)event
{
	UITouch *touch = [touches anyObject]; 
	//CGPoint currentPosition = [touch locationInView:self];
}


- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event 
{
	UITouch *touch = [touches anyObject];
	CGPoint currentPoint = [touch locationInView:self.view];

	RMPM->engine->GetPressed(currentPoint.x, currentPoint.y);
	RMPM->engine->hasBeenPressed = true;
}

- (void)dealloc {
    [super dealloc];
	delete RMPM;
	RMPM=NULL;
}

@end
