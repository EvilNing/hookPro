//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKBridgeBase.h"

@class AlipayAuthHandler;

@interface MDBridgePay : MKBridgeBase
{
    AlipayAuthHandler *_alipayAuthHandler;
}

@property(retain, nonatomic) AlipayAuthHandler *alipayAuthHandler; // @synthesize alipayAuthHandler=_alipayAuthHandler;
- (void).cxx_destruct;
- (void)cashKey:(id)arg1;
- (void)cashDesk:(id)arg1;
- (void)sendPayResult:(id)arg1;
- (void)doWXpay:(id)arg1;
- (void)doAlipay:(id)arg1;
- (void)bindAlipay:(id)arg1;

@end

