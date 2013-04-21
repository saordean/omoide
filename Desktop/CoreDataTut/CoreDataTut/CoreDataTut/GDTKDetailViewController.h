//
//  GDTKDetailViewController.h
//  CoreDataTut
//
//  Created by JerryTaylorKendrick on 4/16/13.
//  Copyright (c) 2013 DeanAMH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GDTKDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
