//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface CCCouponMyAssignmentRevocationToastView : UIView
{
    UILabel *_titleLabel;
    UIImageView *_couponBgView;
    UILabel *_couponFacelValueLabel;
}

@property(retain, nonatomic) UILabel *couponFacelValueLabel; // @synthesize couponFacelValueLabel=_couponFacelValueLabel;
@property(retain, nonatomic) UIImageView *couponBgView; // @synthesize couponBgView=_couponBgView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)UpdateViewWithFaceValue:(id)arg1 couponType:(long long)arg2;
- (void)setupContentViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

