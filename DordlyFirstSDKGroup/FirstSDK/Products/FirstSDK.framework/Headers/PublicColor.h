//
//  PublicColor.h
//  FirstSDK
//
//  Created by dordly on 2018/12/28.
//  Copyright © 2018年 dordly. All rights reserved.
//

#ifndef PublicColor_h
#define PublicColor_h

//颜色
#define RGBA(r,g,b,a)  [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define Main_Color              RGBA(32, 172, 123, 1)//主题色Color.argb(255, 95, 157, 115)
#define Main_HintColor          RGBA(215, 233, 238, 1)//Color.argb(255, 215, 233, 238)
#define Main_NextBgColor        RGBA(242, 243, 244, 1)//Color.argb(255, 215, 233, 238)

#define Three_Hint_BgColor      RGBA(254, 240, 240,1)//三期提示背景颜色
#define Three_Hint_TextColor    RGBA(245, 108, 108,1)//三期提示文字颜色

#define Three_WEHint_text       RGBA(135, 181, 157, 1)
#define Three_WEHint_BG         RGBA(236, 247, 242, 1)

#define Main_BgColor            RGBA(255, 245, 243,1)//主背景色
#define Main_Hint_BgColor       RGBA(228, 244, 245,1)//提示文字颜色
#define Main_TwoColor           RGBA(247,107,107, 1)//主色
#define Nav_Color               RGBA(41,48,51, 1)//navTitle颜色
#define MainText_Color          RGBA(0,0,27, 1)//主标题颜色
#define MainTwoText_Color       RGBA(89, 90, 91, 1)//第二标题颜色
#define MainThreeText_Color     RGBA(142,142,142, 1) //第三标题颜色
#define MainHINTText_Color      RGBA(190,190,190, 1) //备注颜色颜色
#define Line_Color              RGBA(230,230,230, 1) //分割线颜色
#define ThirdColor              RGBA(153,153,153, 1)

//设备型号颜色
#define SC5000FontColor         RGBA(242,162,58, 1)
#define SC5000BgColor           RGBA(252,244,233, 1)
#define L1000FontColor          RGBA(63,115,246, 1)
#define L1000BgColor            RGBA(234,239,252, 1)
#define MC8000FontColor         RGBA(32,172,123, 1)
#define MC8000bgColor           RGBA(230,245,240, 1)

#define Color_whiteTwo          RGBA(244, 244, 244, 1)
#define Color_white             [UIColor whiteColor]
#define Color_clear             [UIColor clearColor]
#define Color_main              [UIColor colorWithHex:0xff2a2f33]//主题颜色
#define Color_redmain           [UIColor colorWithHex:0xffea3f3f]//主题红
#define Color_red               [UIColor colorWithHex:0xffd40012]//红色
#define Color_green             [UIColor colorWithHex:0xff01ae42]//绿色
#define Color_yellow            [UIColor colorWithHex:0xffffb532]//黄色
#define Color_backgroud         [UIColor colorWithHex:0xfff5f7f9]//背景颜色
#define Color_maintext          [UIColor colorWithHex:0xff333333]//主文字颜色
#define Color_subtext           [UIColor colorWithHex:0xff9d9d9d]//辅助文字颜色
#define Color_bluetext          [UIColor colorWithHex:0xff5375ff]//蓝色字体颜色
#define Color_c4e4ff            [UIColor colorWithHex:0xffc4e4ff]//半透明字体颜色
#define Color_line              [UIColor colorWithHex:0xffebebeb]//分隔线颜色
#define Color_circle            [UIColor colorWithHex:0xffebfaf5]//头像边框颜色
#define Color_382866            [UIColor colorWithHex:0xff382866]//头像边框颜色
#define Color_ffe7c1            [UIColor colorWithHex:0xffffe7c1]
#define Color_01ae42            [UIColor colorWithHex:0xff01ae42]
#define Color_ff2d2d            [UIColor colorWithHex:0xffff2d2d]
#define Color_cccccc            [UIColor colorWithHex:0xffcccccc]
#define Color_ffead5            [UIColor colorWithHex:0xffffead5]
#define Color_ef7605            [UIColor colorWithHex:0xffef7605]
#define Color_f1f6f7            [UIColor colorWithHex:0xfff1f6f7]
#define Color_fdf4f2            [UIColor colorWithHex:0xfffdf4f2]
#define Color_e24044            [UIColor colorWithHex:0xffe24044]

/**Img*/
#define Img_Name(n) [UIImage imageNamed:n]


//基础宏定义
#define Frame(X,Y,W,H)          CGRectMake(X, Y, W, H)
#define  LABLE_WIDTH  280 //表的宽度
#define  LABLE_HEIGHT 149 //表的高度
#define DFONTSIZE(F)            F*CGRectGetWidth([UIScreen mainScreen].bounds)/750.0
#define DLEFTMARGIN(X)          X*CGRectGetWidth([UIScreen mainScreen].bounds)/750.0
#define DTOPMARGIN(Y)           Y*CGRectGetHeight([UIScreen mainScreen].bounds)/1334.0
#define DWIDTH(W)               W*CGRectGetWidth([UIScreen mainScreen].bounds)/750.0
#define DHEIGHT(H)              H*CGRectGetHeight([UIScreen mainScreen].bounds)/1334.0
#define SCREEN_WIDTH            CGRectGetWidth([UIScreen mainScreen].bounds)
#define SCREEN_HEIGHT           CGRectGetHeight([UIScreen mainScreen].bounds)
#define NAVIGATION_HEIGHT       ([[ValidateString deviceVersion] isEqualToString:@"iPhone X"]||[[ValidateString deviceVersion] isEqualToString:@"iPhone XS"]||[[ValidateString deviceVersion] isEqualToString:@"iPhone XS Max"]?88:64)
#define TABBAR_HEIGHT           self.tabBarController.tabBar.frame.size.height
#define NAVIGATIONBAR_COLOR     [UIColor colorWithRed:58.0/255.0 green:72.0/255.0 blue:101.0/255.0 alpha:1.0]
#define iOS10Later              ([UIDevice currentDevice].systemVersion.floatValue >= 10.0f)
#define IOS6                    [[[UIDevice currentDevice] systemVersion]floatValue]<=6
#define IOS7                    [[[UIDevice currentDevice] systemVersion]floatValue]>=7
#define IOS8_1                  [[[UIDevice currentDevice] systemVersion]floatValue]<=8
#define IOS8                    [[[UIDevice currentDevice] systemVersion]floatValue]>=8
#define IOS9_1                  [[[UIDevice currentDevice] systemVersion]floatValue]<9
#define IOS9                    [[[UIDevice currentDevice] systemVersion]floatValue]>=9
#endif /* PublicColor_h */
