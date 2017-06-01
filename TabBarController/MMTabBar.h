//
//  MMTabBar.h
//  TabBarController
//
//  Created by YangJie on 2017/6/1.
//  Copyright © 2017年 YangJie. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MMTabBar;
@protocol MMTabBarDelegate <NSObject>

- (void)MMTabBarPlusBtnClick:(MMTabBar *)MMTabBar;

@end

@interface MMTabBar : UITabBar
@property (nonatomic,weak) id <MMTabBarDelegate> delegate;
@end
