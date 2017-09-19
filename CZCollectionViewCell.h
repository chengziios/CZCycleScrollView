//
//  CZCollectionViewCell.h
//  test
//
//  Created by 程健 on 2017/9/5.
//  Copyright © 2017年 程健. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CZCollectionViewCell : UICollectionViewCell
@property (weak, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) NSString *title;

@property (nonatomic, strong) UIColor *titleLabelTextColor;
@property (nonatomic, strong) UIFont *titleLabelTextFont;
@property (nonatomic, strong) UIColor *titleLabelBackgroundColor;
@property (nonatomic, assign) CGFloat titleLabelHeight;
@property (nonatomic, assign) NSTextAlignment titleLabelTextAlignment;

@property (nonatomic, assign) BOOL hasConfigured;

/** 只展示文字轮播 */
@property (nonatomic, assign) BOOL onlyDisplayText;
@end
