//
//  JWorkViewController.h
//  Demo
//
//  Created by jianghouyu on 16/1/26.
//  Copyright © 2016年 jianghouyu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JWorkViewController : UIViewController <UITableViewDataSource,UITableViewDelegate> {
    UITableView *myTableView;
    NSArray *resultArr;
}

@end
