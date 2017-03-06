//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"
#import "WBCountryCodeViewControllerDelegate-Protocol.h"
#import "WBHttpRequestDelegate-Protocol.h"
#import "WBSDKTTTAttributedLabelDelegate-Protocol.h"

@class NSString, NSTimer, UIButton, UIImageView, UILabel, UIScrollView, WBSDKPhoneCountryView, WBSDKProgressHUD, WBSDKTTTAttributedLabel, WBSDKTextField;

@interface WBMessageRegisterViewController : UIViewController <WBHttpRequestDelegate, UITextFieldDelegate, WBCountryCodeViewControllerDelegate, WBSDKTTTAttributedLabelDelegate>
{
    UIScrollView *_backgroundScrollView;	// 8 = 0x8
    WBSDKPhoneCountryView *_countryView;	// 16 = 0x10
    UILabel *tipsLabel;	// 24 = 0x18
    UILabel *serviceLabel;	// 32 = 0x20
    UIImageView *_textFieldBackgroudImageView;	// 40 = 0x28
    WBSDKTextField *_phoneNumberTextField;	// 48 = 0x30
    WBSDKTextField *_verifyCodeTextField;	// 56 = 0x38
    UILabel *_toastMessageLabel;	// 64 = 0x40
    UIButton *_loginButton;	// 72 = 0x48
    UIButton *_sendVerifyCodeButton;	// 80 = 0x50
    long long _resendTime;	// 88 = 0x58
    NSTimer *_resendCodeTimer;	// 96 = 0x60
    WBSDKProgressHUD *hud;	// 104 = 0x68
    WBSDKTTTAttributedLabel *_stipulationLabel;	// 112 = 0x70
}

@property(retain, nonatomic) WBSDKTTTAttributedLabel *stipulationLabel; // @synthesize stipulationLabel=_stipulationLabel;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldValueDidChanged:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)keyboardDidShowNotification:(id)arg1;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)keyboardChangedNotification:(id)arg1;
- (void)toastDisplayWithMessage:(id)arg1 isError:(_Bool)arg2;
- (void)request:(id)arg1 didFinishLoadingWithResult:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)countryCodeDidSelect:(id)arg1;
- (void)openPrivacyProtocolH5;
- (void)openUseProtocolH5;
- (void)countryBtnClick;
- (void)changeTime;
- (void)getVerifyCode;
- (_Bool)checkIsPhoneNumber;
- (_Bool)isPureInt:(id)arg1;
- (_Bool)isEmptyOrWhitespace:(id)arg1;
- (void)SendVerify;
- (void)presentedVCBackButtonClicked;
- (void)setupSubviews;
- (void)initStipulations;
- (void)initVerifyCodeButton;
- (void)initLoginButton;
- (void)initToastMessageLabel;
- (void)initTextField;
- (void)configSubviewsFrame;
- (void)didReceiveMemoryWarning;
- (void)keyboardHide:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
