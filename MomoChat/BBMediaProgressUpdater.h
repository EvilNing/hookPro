//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSTimer;

@interface BBMediaProgressUpdater : NSObject
{
    NSTimer *_timer;
    NSDate *_startDate;
    CDUnknownBlockType _updateHandler;
}

@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) __weak NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)tick:(id)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
