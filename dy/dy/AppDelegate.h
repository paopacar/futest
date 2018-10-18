//
//  AppDelegate.h
//  dy
//
//  Created by wenqiang8 on 2018/10/18.
//  Copyright © 2018年 fuwenqiang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

