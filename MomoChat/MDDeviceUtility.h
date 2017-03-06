//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MDDeviceUtility : NSObject
{
    long long _lastNetworkStatus;
}

+ (id)idfaString;
+ (_Bool)isInvalidIdfaString:(id)arg1;
@property(nonatomic) long long lastNetworkStatus; // @synthesize lastNetworkStatus=_lastNetworkStatus;
- (unsigned int)countOFCores;
- (_Bool)systemVersionIos7;
- (_Bool)isBatteryCharging;
- (double)getBatteryLevel;
- (_Bool)isIPhone5;
- (void)crashOMG;
- (void)initWithNetWork;
- (struct __SecKey *)getKeyRefWithPersistentKeyRef:(void *)arg1;
- (struct __SecKey *)addPeerPublicKey:(id)arg1 keyBits:(id)arg2;
- (id)identifierForApi;
- (id)deviceIdForBaidu;
- (struct __SecCertificate *)getCertFromDer;
- (id)origWebUserAgent;
- (id)webViewUserAgent;
- (void)setWebViewUserAgent;
- (id)userAgentData;
- (id)userAgentString;
- (_Bool)isIPhone;
- (id)systemVersion;
- (id)systemName;
- (id)model;
- (id)platformString;
- (id)platformId;
- (id)osLanguageAndCountry;
- (id)kid;
- (id)deviceId;
- (id)mac;
- (id)apnsToken;
- (id)init;

@end
