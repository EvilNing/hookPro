//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBSDKServerDelegate-Protocol.h"

@class NSString;
@protocol aluRpcInvoker;

@interface aluMockEasyLoginManager : NSObject <TBSDKServerDelegate>
{
    id <aluRpcInvoker> _userPwdMockEasyLoginInvoker;	// 8 = 0x8
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <aluRpcInvoker> userPwdMockEasyLoginInvoker; // @synthesize userPwdMockEasyLoginInvoker=_userPwdMockEasyLoginInvoker;
- (void).cxx_destruct;
- (void)showBasicAlert:(id)arg1 withTitle:(id)arg2;
- (void)onMockEasyLoginFailed:(id)arg1;
- (void)handlerMockEasyLoginRes:(id)arg1 mdict:(id)arg2;
- (void)onMockEasyLoginSuc:(id)arg1;
- (void)alu_p_handleMockEasyLoginResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

