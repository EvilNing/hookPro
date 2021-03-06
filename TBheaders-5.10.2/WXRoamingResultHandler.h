//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXRoamingResultHandlerProtocal-Protocol.h"

@class NSDate, NSDictionary, NSString;

@interface WXRoamingResultHandler : NSObject <WXRoamingResultHandlerProtocal>
{
    NSDictionary *_requestParams;	// 8 = 0x8
    NSDate *_earliestEffectiveTime;	// 16 = 0x10
    unsigned long long _messageCount;	// 24 = 0x18
}

@property(nonatomic) unsigned long long messageCount; // @synthesize messageCount=_messageCount;
@property(retain, nonatomic) NSDate *earliestEffectiveTime; // @synthesize earliestEffectiveTime=_earliestEffectiveTime;
@property(nonatomic) NSDictionary *requestParams; // @synthesize requestParams=_requestParams;
- (void).cxx_destruct;
- (void)handleResultData:(id)arg1 withRequestParams:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

