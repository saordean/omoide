//
//  AppDelegate.m
//  Cruinne
//
//  Created by JerryTaylorKendrick on 3/27/13.
//  Copyright (c) 2013 Jerry Taylor Kendrick. All rights reserved.
//

#import "AppDelegate.h"
#import "CruinneViewController.h"


@implementation AppDelegate

@synthesize mainView;

NSString *selectedFortune;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    // Override point for customization after application launch.

    // init the view controller
    mainView = [[CruinneViewController alloc] init];
    
    // set as root view
    self.window.rootViewController = mainView;
    
    [self.window makeKeyAndVisible];
    return YES;
}

@end
