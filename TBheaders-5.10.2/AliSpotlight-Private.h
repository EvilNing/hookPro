//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliSpotlight.h"

@class AliSpotEnv, AliSpotGhost, AliSpotSearch, AliSpotSetting;

@interface AliSpotlight (Private)
+ (void)makeUpForAddSearch;
- (void)ghostAliSpot;
- (void)addSearchableItemForMakeUp;
- (void)updateItemUserCountById:(id)arg1 finishHanlder:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(retain, nonatomic) AliSpotEnv *spotEnv; // @dynamic spotEnv;
@property(retain, nonatomic) AliSpotGhost *spotGhost; // @dynamic spotGhost;
@property(retain, nonatomic) AliSpotSearch *spotSearch; // @dynamic spotSearch;
@property(retain, nonatomic) AliSpotSetting *spotSetting; // @dynamic spotSetting;
@end

