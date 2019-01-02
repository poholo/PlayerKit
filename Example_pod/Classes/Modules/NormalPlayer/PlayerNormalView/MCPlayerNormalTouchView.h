//
// Created by majiancheng on 2018/12/29.
// Copyright (c) 2018 majiancheng. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "MCPlayerViewConfig.h"

/**
 * 管理播放器UI触摸事件
 */

extern NSString *const kMCTouchTapAction;
extern NSString *const kMCTouchSwipeAction;

@interface MCPlayerNormalTouchView : UIView

@property(nonatomic, copy) MCPlayerNormalViewEventCallBack callBack;

@end