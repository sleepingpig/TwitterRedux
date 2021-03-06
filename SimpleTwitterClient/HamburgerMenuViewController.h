//
//  HamburgerMenuViewController.h
//  TwitterRedux
//
//  Created by Chu-An Hsieh on 7/7/15.
//  Copyright (c) 2015 Chu-An Hsieh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HamburgerMenuViewController : UIViewController

- (void)attachHamburgerMenuVC:(UIViewController *)vc;
- (void)attachMainVC:(UIViewController *)vc;
- (instancetype)initWithMainVC:(UIViewController *)mainVC menuVC:(UIViewController*)menuVC;
@end
