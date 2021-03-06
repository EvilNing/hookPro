//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WJLoginTLVBase.h"

@class NSString;

@interface WJLoginTLV0x48 : WJLoginTLVBase
{
    short _deviceNameLen;
    short _deviceBrandLen;
    short _deviceModelLen;
    short _deviceReserveLen;
    NSString *_deviceName;
    NSString *_deviceBrand;
    NSString *_deviceModel;
    NSString *_deviceReserve;
}

@property(nonatomic) short deviceReserveLen; // @synthesize deviceReserveLen=_deviceReserveLen;
@property(nonatomic) short deviceModelLen; // @synthesize deviceModelLen=_deviceModelLen;
@property(nonatomic) short deviceBrandLen; // @synthesize deviceBrandLen=_deviceBrandLen;
@property(nonatomic) short deviceNameLen; // @synthesize deviceNameLen=_deviceNameLen;
@property(copy, nonatomic) NSString *deviceReserve; // @synthesize deviceReserve=_deviceReserve;
@property(copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(copy, nonatomic) NSString *deviceBrand; // @synthesize deviceBrand=_deviceBrand;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (void).cxx_destruct;
- (unsigned long long)getTLVLength;
- (int)encodeWithBuffer:(id)arg1;
- (void)fillTLVWithTLVInfo:(id)arg1;

@end

