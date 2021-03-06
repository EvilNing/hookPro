//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IRVideoPlay;

@interface LCIResearchLogEngine : NSObject
{
    id <LCIResearchLogEngineDataSource> _dataSource;
    IRVideoPlay *_iResearchTracker;
}

+ (id)getOpenSourceIresearchCacheDate;
+ (void)setOpenSourceIresearchCacheDate:(id)arg1;
+ (void)saveStringValueToUserDefaults:(id)arg1 ForKey:(id)arg2;
+ (id)getStringValueFromUserDefaults:(id)arg1;
+ (void)clearIresearchCache;
@property(retain, nonatomic) IRVideoPlay *iResearchTracker; // @synthesize iResearchTracker=_iResearchTracker;
@property(nonatomic) id <LCIResearchLogEngineDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)recordIResearchLog:(long long)arg1;
- (void)openSourceIresearchEnd;
- (void)openSourceIresearchPause;
- (void)openSourceIresearchPlay;
- (id)valueWithType:(long long)arg1;
- (id)init;

@end

