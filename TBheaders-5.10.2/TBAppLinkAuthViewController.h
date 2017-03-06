//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBAbstractAppLinkAuthViewController.h"

#import "TBWOPCAuthViewDelegate-Protocol.h"

@class NSString, NSTimer, TBAppLinkAuthView;

@interface TBAppLinkAuthViewController : TBAbstractAppLinkAuthViewController <TBWOPCAuthViewDelegate>
{
    _Bool isCancelAutoAuth;	// 8 = 0x8
    TBAppLinkAuthView *_mainView;	// 16 = 0x10
    NSTimer *_timer;	// 24 = 0x18
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) TBAppLinkAuthView *mainView; // @synthesize mainView=_mainView;
- (void).cxx_destruct;
- (void)getAuthorityList;
- (void)showAgreement;
- (void)exchangeAccount;
- (void)getAuthCodeByAppkey:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)userDidAuth;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dismissViewController;
- (void)backItemClicked:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
