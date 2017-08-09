//
//  AppDelegate.h
//  TestDemo
//
//  Created by 张雷 on 2017/8/9.
//  Copyright © 2017年 张雷. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

