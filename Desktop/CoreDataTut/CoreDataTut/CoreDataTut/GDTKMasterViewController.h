//
//  GDTKMasterViewController.h
//  CoreDataTut
//
//  Created by JerryTaylorKendrick on 4/16/13.
//  Copyright (c) 2013 DeanAMH. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GDTKDetailViewController;

#import <CoreData/CoreData.h>

@interface GDTKMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) GDTKDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
