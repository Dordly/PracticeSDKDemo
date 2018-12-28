//
//  TestView.h
//  FirstSDK
//
//  Created by dordly on 2018/12/28.
//  Copyright © 2018年 dordly. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class TestView;
@protocol TestViewDelegate <NSObject>

- (void)addBtClick:(NSInteger)tag;

@end
@interface TestView : UIView
@property (nonatomic, weak)id<TestViewDelegate>testDelegate;

- (instancetype)initWithColor:(UIColor *)color;
/**提示弹框*/
- (id)initWithFrame:(CGRect)frame WithPromptImg:(NSString *)img WithPromptTitle:(NSString *)title WithType:(NSString *)type WithHaveTopImg:(BOOL)isHave;

@end

NS_ASSUME_NONNULL_END
