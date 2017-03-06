//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, TXBubbleView, TXPhoneNumTextField, UIButton, UIColor, UIFont, UILabel, UITableView;
@protocol TXPhoneNumberViewDelegate;

@interface TXPhoneNumberView : UIView <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UIColor *_textColor;	// 8 = 0x8
    UIFont *_textFont;	// 16 = 0x10
    UIColor *_belongToColor;	// 24 = 0x18
    UIFont *_belongToFont;	// 32 = 0x20
    UIColor *_contactColor;	// 40 = 0x28
    UIFont *_contactFont;	// 48 = 0x30
    NSString *_belongTo;	// 56 = 0x38
    NSString *_contactName;	// 64 = 0x40
    double _textFieldLeftPadding;	// 72 = 0x48
    id <TXPhoneNumberViewDelegate> _delegate;	// 80 = 0x50
    TXPhoneNumTextField *_textField;	// 88 = 0x58
    UILabel *_belongToLabel;	// 96 = 0x60
    UILabel *_contactNameLabel;	// 104 = 0x68
    UIButton *_contactBtn;	// 112 = 0x70
    UIButton *_cancelBtn;	// 120 = 0x78
    UIView *_maskView;	// 128 = 0x80
    TXBubbleView *_bubbleView;	// 136 = 0x88
    UITableView *_tableView;	// 144 = 0x90
    double _heightOfTextField;	// 152 = 0x98
}

@property(nonatomic) double heightOfTextField; // @synthesize heightOfTextField=_heightOfTextField;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) TXBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIButton *contactBtn; // @synthesize contactBtn=_contactBtn;
@property(retain, nonatomic) UILabel *contactNameLabel; // @synthesize contactNameLabel=_contactNameLabel;
@property(retain, nonatomic) UILabel *belongToLabel; // @synthesize belongToLabel=_belongToLabel;
@property(retain, nonatomic) TXPhoneNumTextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak id <TXPhoneNumberViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double textFieldLeftPadding; // @synthesize textFieldLeftPadding=_textFieldLeftPadding;
@property(copy, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(copy, nonatomic) NSString *belongTo; // @synthesize belongTo=_belongTo;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
@property(retain, nonatomic) UIColor *contactColor; // @synthesize contactColor=_contactColor;
@property(retain, nonatomic) UIFont *contactFont; // @synthesize contactFont=_contactFont;
@property(retain, nonatomic) UIColor *belongToColor; // @synthesize belongToColor=_belongToColor;
@property(retain, nonatomic) UIFont *belongToFont; // @synthesize belongToFont=_belongToFont;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(copy, nonatomic) NSString *placeholder;
@property(copy, nonatomic) NSString *phoneNum;
- (void)onCancelBtnClick:(id)arg1;
- (void)onContactBtnClick:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)isFirstResponder;
- (void)showBubbleView:(_Bool)arg1 isTelFee:(_Bool)arg2 text:(id)arg3;
- (void)showTableView:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
