//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface TBFriendObject : NSObject
{
    NSString *_userId;	// 8 = 0x8
    NSString *_nick;	// 16 = 0x10
    NSURL *_headPhotoUrl;	// 24 = 0x18
    NSString *_userType;	// 32 = 0x20
}

@property(retain, nonatomic) NSString *userType; // @synthesize userType=_userType;
@property(retain, nonatomic) NSURL *headPhotoUrl; // @synthesize headPhotoUrl=_headPhotoUrl;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

