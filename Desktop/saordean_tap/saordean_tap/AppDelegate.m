//
//  AppDelegate.m
//  saordean_tap
//

//  Created by JerryTaylorKendrick on 3/25/13.
//  Copyright (c) 2013 Gerald Dean Taylor Kendrick. All rights reserved.
//

#import "AppDelegate.h"
#import "saordean_tapViewController.h"

@implementation AppDelegate

@synthesize mainView;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    // Override point for customization after application launch.
    
    // init the view controller
    mainView = [[saordean_tapViewController alloc] init];
    
    // set as root view
    self.window.rootViewController = mainView;
    
    // proceed
    [self.window makeKeyAndVisible];
    return YES;
}

@end
