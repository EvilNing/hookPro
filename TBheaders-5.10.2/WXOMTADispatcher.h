//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WXOMTADispatcher : NSObject
{
    struct dispatch_queue_s *task_queue;	// 8 = 0x8
    struct __CFArray *streams;	// 16 = 0x10
}

+ (id)getInstance;
- (id)GetCurTime;
- (void)send:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)nsRequest:(id)arg1 responseData:(id *)arg2;
- (void)sendEvent:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)close;
- (id)init;

@end

