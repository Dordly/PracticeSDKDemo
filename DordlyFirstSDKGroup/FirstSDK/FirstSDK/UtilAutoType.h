//
//  UtilAutoType.h
//  FirstSDK
//
//  Created by dordly on 2018/12/28.
//  Copyright © 2018年 dordly. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface UtilAutoType : NSObject
#pragma mark ============>UIView
//设置常见View
UIView *insertAutoView(id view, UIColor *color);


#pragma mark =============>UIButton
UIButton *insertAutoButton(id superView,UIImage *normalImage,UIImage *selectedImage,UIColor *bgColor,UIColor *titleNormalColor,UIColor *titleSelectedColor,UIFont *titleFont,NSString *titleStr,UIControlContentHorizontalAlignment slignment);

UIButton *changeAutoButton(id superView,UIImage *normalImage,UIImage *selectedImage,UIColor *bgColor,UIColor *titleNormalColor,UIColor *titleSelectedColor,UIFont *titleFont,NSString *titleStr);
#pragma mark ==============> UIImageView
UIImageView *insertAutoImage(id superView, UIImage *image,UIColor *bgColor);
#pragma mark ==============> UILabel
UILabel *insertAutoMutiLabel(id superView,UIColor *textColor,UIColor *bgColor,UIFont *font,NSTextAlignment align,NSString *contentStr, NSInteger lineNum,NSLineBreakMode lineBreakMode);
UILabel *insertAutoLabel(id superView,UIColor *textColor,UIColor *bgColor,UIFont *font,NSTextAlignment align,NSString *contentStr);
#pragma mark ===============>UITextField
UITextField *insertAutoTextField(id superView,NSString*placeholderStr,UIFont *font,NSTextAlignment alignment,UIColor *textColor,UIColor *bgColor);

#pragma mark - 创建循环内容显示 -
UILabel *  setContentLabel(id mainView, UIColor * textColor, UIColor * bgColor, UIFont *font,NSTextAlignment align,NSString *contentStr,NSInteger topTag, BOOL isButton, SEL action);

@end

NS_ASSUME_NONNULL_END
