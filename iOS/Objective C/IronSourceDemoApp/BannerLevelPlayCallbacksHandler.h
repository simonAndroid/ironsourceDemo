//
//  BannerLevelPlayCallbacksHandler.h
//  IronSourceDemoApp
//
//  Copyright © 2023 IronSource. All rights reserved.


#import <Foundation/Foundation.h>
#import <IronSource/IronSource.h>

@class DemoViewController;

NS_ASSUME_NONNULL_BEGIN

@interface BannerLevelPlayCallbacksHandler : NSObject<LevelPlayBannerDelegate>

@property (nonatomic, weak) DemoViewController *demoViewController;

- (instancetype)initWithDemoViewController:(DemoViewController *)viewController;

@end

NS_ASSUME_NONNULL_END
