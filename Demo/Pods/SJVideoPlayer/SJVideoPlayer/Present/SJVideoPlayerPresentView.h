//
//  SJVideoPlayerPresentView.h
//  SJVideoPlayerProject
//
//  Created by BlueDancer on 2017/11/29.
//  Copyright © 2017年 SanJiang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@class SJVideoPlayerAssetCarrier;

NS_ASSUME_NONNULL_BEGIN

@interface SJVideoPlayerPresentView : UIView

- (AVPlayerLayer *)avLayer;

@property (nonatomic, strong, readonly) UIImageView *placeholderImageView;

@property (nonatomic, strong, readwrite) AVLayerVideoGravity videoGravity;

@property (nonatomic, weak, readwrite, nullable) SJVideoPlayerAssetCarrier *asset;

@property (nonatomic, copy, readwrite, nullable) void(^readyForDisplay)(SJVideoPlayerPresentView *view);

@end

NS_ASSUME_NONNULL_END
