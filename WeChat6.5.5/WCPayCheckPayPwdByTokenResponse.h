//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WCPayCheckPayPwdByTokenResponse : NSObject
{
    NSString *m_nsCheckPwdToken;
    _Bool m_bIsFreeSMS;
    NSString *m_nsMobileNo;
    NSString *m_nsRelationKey;
}

@property(retain, nonatomic) NSString *m_nsRelationKey; // @synthesize m_nsRelationKey;
@property(retain, nonatomic) NSString *m_nsMobileNo; // @synthesize m_nsMobileNo;
@property(nonatomic) _Bool m_bIsFreeSMS; // @synthesize m_bIsFreeSMS;
@property(retain, nonatomic) NSString *m_nsCheckPwdToken; // @synthesize m_nsCheckPwdToken;
- (void).cxx_destruct;
- (void)dealloc;

@end
