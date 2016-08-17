//
//  TableViewCell.h
//  TableViewSingleSelectDemo
//
//  Created by scsys on 16/3/31.
//  Copyright © 2016年 北京蓝科新宇教育科技股份有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Model.h"

@interface TableViewCell : UITableViewCell

@property (nonatomic,retain) UIButton *selectBtn;

- (void)setContentWithModel:(Model *)model;

@end
