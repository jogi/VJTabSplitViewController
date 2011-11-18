//
//  MasterViewController.h
//  TestSplitViewController
//
//  Created by Vashishtha Jogi on 11/18/11.
//  Copyright (c) 2011 Vashishtha Jogi. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
