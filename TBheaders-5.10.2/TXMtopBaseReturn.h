//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TXMtopBaseReturn : NSObject
{
    NSString *_api;	// 8 = 0x8
    NSString *_v;	// 16 = 0x10
    id _data;	// 24 = 0x18
    NSArray *_ret;	// 32 = 0x20
}

@property(retain, nonatomic) NSArray *ret; // @synthesize ret=_ret;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *v; // @synthesize v=_v;
@property(copy, nonatomic) NSString *api; // @synthesize api=_api;
- (void).cxx_destruct;
- (id)description;
- (id)msg;
- (id)desc;
- (id)getRetMessageAtIndex:(unsigned long long)arg1;
- (id)getRetCodeAtIndex:(unsigned long long)arg1;
- (unsigned long long)retCount;

@end

