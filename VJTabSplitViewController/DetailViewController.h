//
//  DetailViewController.h
//  TestSplitViewController
//
//  Created by Vashishtha Jogi on 11/18/11.
//  Copyright (c) 2011 Vashishtha Jogi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
