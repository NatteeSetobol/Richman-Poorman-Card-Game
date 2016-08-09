//
//  rmpmAppDelegate.h
//  rmpm
//
//  Created by meow meowington on 12/16/12.
//  Copyright __MyCompanyName__ 2012. All rights reserved.
//

#import <UIKit/UIKit.h>

@class rmpmViewController;

@interface rmpmAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    rmpmViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet rmpmViewController *viewController;

@end

