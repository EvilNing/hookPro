//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WVMonitorInfoProtocol-Protocol.h"

@class NSString;

@interface WVPackageCleanUpMonitorInfo : NSObject <WVMonitorInfoProtocol>
{
    NSString *_cleanCause;	// 8 = 0x8
    NSString *_expectedApps;	// 16 = 0x10
    unsigned long long _freeDiskSpace;	// 24 = 0x18
    unsigned long long _installedApps;	// 32 = 0x20
    unsigned long long _targetApps;	// 40 = 0x28
    double _accessCount;	// 48 = 0x30
    double _ignoredAccessCount;	// 56 = 0x38
}

+ (id)monitorPoint;
@property(nonatomic) double ignoredAccessCount; // @synthesize ignoredAccessCount=_ignoredAccessCount;
@property(nonatomic) double accessCount; // @synthesize accessCount=_accessCount;
@property(nonatomic) unsigned long long targetApps; // @synthesize targetApps=_targetApps;
@property(nonatomic) unsigned long long installedApps; // @synthesize installedApps=_installedApps;
@property(nonatomic) unsigned long long freeDiskSpace; // @synthesize freeDiskSpace=_freeDiskSpace;
@property(retain, nonatomic) NSString *expectedApps; // @synthesize expectedApps=_expectedApps;
@property(retain, nonatomic) NSString *cleanCause; // @synthesize cleanCause=_cleanCause;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

