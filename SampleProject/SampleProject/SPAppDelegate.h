//
//  SPAppDelegate.h
//  SampleProject
//
//  Created by 田畑浩平 on 2013/09/16.
//  Copyright (c) 2013年 Kohei Tabata. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SPViewController;

@interface SPAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) SPViewController *viewController;

@end
