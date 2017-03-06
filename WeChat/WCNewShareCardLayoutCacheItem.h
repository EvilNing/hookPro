//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface WCNewShareCardLayoutCacheItem : MMObject <PBCoding>
{
    _Bool entryShowNew;
    _Bool entryShowRedDot;
    unsigned int lastUpdateTime;
    NSMutableArray *localCityList;
    NSMutableArray *otherCityList;
    NSString *cityName;
    NSString *entryTip;
    NSMutableArray *entryIcons;
}

+ (void)initialize;
@property(nonatomic) _Bool entryShowRedDot; // @synthesize entryShowRedDot;
@property(nonatomic) _Bool entryShowNew; // @synthesize entryShowNew;
@property(retain, nonatomic) NSMutableArray *entryIcons; // @synthesize entryIcons;
@property(retain, nonatomic) NSString *entryTip; // @synthesize entryTip;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName;
@property(retain, nonatomic) NSMutableArray *otherCityList; // @synthesize otherCityList;
@property(retain, nonatomic) NSMutableArray *localCityList; // @synthesize localCityList;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
