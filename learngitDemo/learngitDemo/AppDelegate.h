//
//  AppDelegate.h
//  learngitDemo
//
//  Created by 奇诺卡布 on 2017/3/21.
//  Copyright © 2017年 奇诺卡布. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

