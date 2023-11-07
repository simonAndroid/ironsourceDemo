//
//  DemoViewController.h
//  IronSourceDemoApp
//
//  Copyright © 2023 IronSource. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <IronSource/IronSource.h>

@interface DemoViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIButton *showRewardedVideoButton;

@property (weak, nonatomic) IBOutlet UIButton *loadInterstitialButton;
@property (weak, nonatomic) IBOutlet UIButton *showInterstitialButton;

@property (weak, nonatomic) IBOutlet UIButton *loadBannerButton;
@property (weak, nonatomic) IBOutlet UIButton *destroyBannerButton;

@property (weak, nonatomic) IBOutlet UILabel  *versionLabel;

- (void)setAndBindBannerView:(ISBannerView *)bannerView;
- (void)setEnablement:(BOOL)enablement forButton:(UIButton *)button;
- (void)showVideoRewardMessage;

@end

