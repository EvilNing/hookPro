//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface APAuthInfo : NSObject
{
    NSString *_appID;	// 8 = 0x8
    NSString *_pid;	// 16 = 0x10
    NSString *_redirectUri;	// 24 = 0x18
}

@property(copy, nonatomic) NSString *redirectUri; // @synthesize redirectUri=_redirectUri;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void).cxx_destruct;
- (id)wapDescription;
- (id)description;
- (id)initWithAppID:(id)arg1 pid:(id)arg2 redirectUri:(id)arg3;

@end

