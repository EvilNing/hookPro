//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WindVaneAPIAuthCheckProtocol-Protocol.h"

@class NSString;
@protocol WindVaneAPIAuthCheckProtocol;

@interface JAEJSBridgeAuthHandler : NSObject <WindVaneAPIAuthCheckProtocol>
{
    id <WindVaneAPIAuthCheckProtocol> _oldAuthHandler;	// 8 = 0x8
}

+ (void)registerToJSBService;
@property(retain, nonatomic) id <WindVaneAPIAuthCheckProtocol> oldAuthHandler; // @synthesize oldAuthHandler=_oldAuthHandler;
- (void).cxx_destruct;
- (void)apiAuthCheck:(id)arg1 withMethod:(id)arg2 withParam:(id)arg3 withWebView:(id)arg4 withViewController:(id)arg5 withCompelete:(CDUnknownBlockType)arg6;
- (id)apiAuthCheck:(id)arg1 withMethod:(id)arg2 withParam:(id)arg3 withWebView:(id)arg4 withViewController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

