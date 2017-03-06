//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_semaphore;

@interface AVFSCacheManager : NSObject
{
    NSMutableDictionary *_cachesDict;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_lockSemaphore;	// 16 = 0x10
    NSMutableArray *_cachesLink;	// 24 = 0x18
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)removeCacheForModule:(id)arg1;
- (_Bool)cacheExistForModule:(id)arg1;
- (id)cacheForModule:(id)arg1;
- (id)defaultCache;
- (id)init;

@end
