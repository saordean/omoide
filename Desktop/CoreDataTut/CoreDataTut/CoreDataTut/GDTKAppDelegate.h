//
//  GDTKAppDelegate.h
//  CoreDataTut
//
//  Created by JerryTaylorKendrick on 4/16/13.
//  Copyright (c) 2013 DeanAMH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GDTKAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@property (strong, nonatomic) UINavigationController *navigationController;

@end
