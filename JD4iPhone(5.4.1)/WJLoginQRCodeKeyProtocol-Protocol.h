//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@protocol WJLoginQRCodeKeyProtocol <NSObject>

@optional
- (void)onQRCodeKeyError:(NSError *)arg1;
- (void)onQRCodeKeyFailed:(int)arg1 errorMessage:(NSString *)arg2 qrCodeScannedTips:(NSString *)arg3 type:(unsigned char)arg4 imageURL:(NSString *)arg5;
- (void)onQRCodeKeyFailed:(int)arg1 errorMessage:(NSString *)arg2 qrCodeScannedTips:(NSString *)arg3 type:(unsigned char)arg4;
- (void)onQRCodeKeyScannedSuccess:(NSString *)arg1 buttionTips:(NSString *)arg2 type:(unsigned char)arg3 imageURL:(NSString *)arg4;
- (void)onQRCodeKeyScannedSuccess:(NSString *)arg1 buttionTips:(NSString *)arg2 type:(unsigned char)arg3;
@end

