//
//  TestView.m
//  FirstSDK
//
//  Created by dordly on 2018/12/28.
//  Copyright © 2018年 dordly. All rights reserved.
//

#import "TestView.h"
#import "UtilAutoType.h"
#import "PublicColor.h"
#import "PublicFont.h"
@implementation TestView
- (instancetype)initWithColor:(UIColor *)color
{
    if (self = [super init]){
        self.backgroundColor = color;
    }
    return self;
}
- (id)initWithFrame:(CGRect)frame WithPromptImg:(NSString *)img WithPromptTitle:(NSString *)title WithType:(NSString *)type WithHaveTopImg:(BOOL)isHave
{
    if (self = [super init]){
        self.frame = frame;
        self.backgroundColor = RGBA(0, 0, 0, 0.6);
        
        UIView * bgView = insertAutoView(self, Color_white);
        bgView.frame = CGRectMake(0, 0, SCREEN_WIDTH-80, 160);
        bgView.center = CGPointMake(SCREEN_WIDTH/2, SCREEN_HEIGHT/2);
        bgView.layer.masksToBounds = YES;
        bgView.layer.cornerRadius = 10;
        
        UILabel * promptLabel = insertAutoLabel(bgView, MainTwoText_Color, Color_clear, Regular_36, NSTextAlignmentCenter, title);
        promptLabel.numberOfLines = 0;
        UIButton * trueBt = insertAutoButton(bgView, Img_Name(@""), Img_Name(@""), Color_clear, Main_Color, MainText_Color, Regular_32, @"确定", UIControlContentHorizontalAlignmentCenter);
        trueBt.frame = CGRectMake(0, 120, bgView.frame.size.width/2, 40);
        UIView * lineView = insertAutoView(bgView, Line_Color);
        lineView.frame = CGRectMake(0, 199, bgView.frame.size.width, 1);
        UIView * twoLineView = insertAutoView(bgView, Line_Color);
        twoLineView.frame = CGRectMake(trueBt.frame.size.width, 120, 1, 40);
        UIButton * falseBt = insertAutoButton(bgView, Img_Name(@""), Img_Name(@""), Color_clear, MainTwoText_Color, MainTwoText_Color, Regular_32, @"取消", UIControlContentHorizontalAlignmentCenter);
        falseBt.frame = CGRectMake(trueBt.frame.size.width, 120, bgView.frame.size.width/2, 40);
        trueBt.tag = 3;
        falseBt.tag = 2;
        [trueBt addTarget:self action:@selector(jumpBack:) forControlEvents:UIControlEventTouchUpInside];
        [falseBt addTarget:self action:@selector(jumpBack:) forControlEvents:UIControlEventTouchUpInside];
        if (isHave){
            UIImageView * prompt = insertAutoImage(bgView, Img_Name(img), Color_clear);
            prompt.frame = CGRectMake(120, 20, 40, 40);
            promptLabel.frame = CGRectMake(10, prompt.frame.size.height+30, bgView.frame.size.width-20, 40);
        }else{
            UILabel * prompt = insertAutoLabel(bgView, MainText_Color, Color_clear, Regular_30, NSTextAlignmentCenter, type);
            prompt.frame = CGRectMake(10, 20, bgView.frame.size.width-20, 30);
            promptLabel.frame = CGRectMake(10, prompt.frame.size.height+30, bgView.frame.size.width-20, 40);
        }
        
    }
    return self;
}
- (void)jumpBack:(UIButton *)sender {
    [self.testDelegate addBtClick:sender.tag];
}
@end
