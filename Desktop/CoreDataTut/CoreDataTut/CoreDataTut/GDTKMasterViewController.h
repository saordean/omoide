//
//  GDTKMasterViewController.h
//  CoreDataTut
//
//  Created by JerryTaylorKendrick on 4/16/13.
//  Copyright (c) 2013 DeanAMH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@class GDTKDetailViewController;

#import <CoreData/CoreData.h>

@interface GDTKMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate, CLLocationManagerDelegate> {

}
@property (strong, nonatomic) GDTKDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, strong) NSMutableArray  *eventsArray;
@property (nonatomic, strong) CLLocationManager *locationManager;
@property (nonatomic, strong)  UIBarButtonItem *addButton;

@end
