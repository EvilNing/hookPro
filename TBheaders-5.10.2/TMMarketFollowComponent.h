//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMMarketBaseComponent.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface TMMarketFollowComponent : TMMarketBaseComponent
{
    NSString *_message;	// 24 = 0x18
    NSString *_tipsIcon;	// 32 = 0x20
    UIImageView *_tipsIconView;	// 40 = 0x28
    UILabel *_messageLabel;	// 48 = 0x30
    UIButton *_followedButton;	// 56 = 0x38
    UIButton *_followButton;	// 64 = 0x40
    UIButton *_closeButton;	// 72 = 0x48
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UIButton *followedButton; // @synthesize followedButton=_followedButton;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIImageView *tipsIconView; // @synthesize tipsIconView=_tipsIconView;
@property(copy, nonatomic) NSString *tipsIcon; // @synthesize tipsIcon=_tipsIcon;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)calculateLayout;
- (void)showFollowSuccess;
- (void)followButtonClicked;
- (void)closeButtonClicked;
- (id)initWithFrame:(struct CGRect)arg1;

@end

