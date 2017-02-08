//
//  TwinkleLayer+Anim.h
//  Twinkle
//
//  Created by imac on 15/9/6.
//  Copyright (c) 2015年 libin. All rights reserved.
//

#import "TwinkleLayer.h"
#import <UIKit/UIKit.h>

@interface TwinkleLayer (Anim)

- (void)addPositionAnimation;
- (void)addRotationAnimation;
- (void)addFadeInOutAnimation:(CFTimeInterval)beginTime;

@end
