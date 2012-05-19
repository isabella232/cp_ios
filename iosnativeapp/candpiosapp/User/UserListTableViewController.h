//
//  UserListTableViewController.h
//  candpiosapp
//
//  Created by Emmanuel Crouvisier on 1/11/12.
//  Copyright (c) 2012 Coffee and Power Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CPSwipeableTableViewCell.h"
#import "CPBaseTableViewController.h"

@interface UserListTableViewController : CPBaseTableViewController <UINavigationControllerDelegate, CPSwipeableTableViewCellDelegate>

@property (nonatomic, retain) NSMutableArray *weeklyUsers;
@property (nonatomic, retain) NSMutableArray *checkedInUsers;


- (void)refreshFromNewMapData:(NSNotification *)notification;

@end
