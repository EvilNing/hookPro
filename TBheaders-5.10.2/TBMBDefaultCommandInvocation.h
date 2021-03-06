//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBMBCommandInvocation-Protocol.h"

@class NSEnumerator, NSString;
@protocol TBMBNotification;

@interface TBMBDefaultCommandInvocation : NSObject <TBMBCommandInvocation>
{
    Class _commandClass;	// 8 = 0x8
    id <TBMBNotification> _notification;	// 16 = 0x10
    NSEnumerator *_interceptors;	// 24 = 0x18
}

+ (id)objectWithCommandClass:(Class)arg1 notification:(id)arg2 interceptors:(id)arg3;
@property(retain, nonatomic) id <TBMBNotification> notification; // @synthesize notification=_notification;
@property(retain, nonatomic) Class commandClass; // @synthesize commandClass=_commandClass;
- (void).cxx_destruct;
- (void)dealloc;
- (id)invoke;
- (id)initWithCommandClass:(Class)arg1 notification:(id)arg2 interceptors:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

