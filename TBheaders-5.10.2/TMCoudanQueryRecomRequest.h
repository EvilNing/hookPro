//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMCoudanBaseRequest.h"

@class NSDictionary, NSString;

@interface TMCoudanQueryRecomRequest : TMCoudanBaseRequest
{
    NSString *_appId;	// 8 = 0x8
    NSDictionary *_params;	// 16 = 0x10
}

@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (id)description;

@end

