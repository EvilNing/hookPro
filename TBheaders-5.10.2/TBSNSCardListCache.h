//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBSNSCardListCache : NSObject
{
    NSString *_cacheKey;	// 8 = 0x8
}

@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
- (void).cxx_destruct;
- (void)doCacheData:(id)arg1;
- (id)getCacheData:(id)arg1 withItemClass:(Class)arg2;

@end
