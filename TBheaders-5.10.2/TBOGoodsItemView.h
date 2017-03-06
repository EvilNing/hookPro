//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ITBOModel-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface TBOGoodsItemView : UIView <ITBOModel>
{
    id _model;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    UIButton *_iconBtn;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_desLabel;	// 40 = 0x28
    UILabel *_accessoryView;	// 48 = 0x30
}

@property(retain, nonatomic) UILabel *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *iconBtn; // @synthesize iconBtn=_iconBtn;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) id model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
