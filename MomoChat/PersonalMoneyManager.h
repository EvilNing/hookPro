//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDUserConfig;

@interface PersonalMoneyManager : NSObject
{
    float money;
    int moneyStatus;
    MDUserConfig *userConfig;
}

- (void)updateMoneyManager:(id)arg1;
- (void)setMoneyStatus:(int)arg1;
- (int)moneyStatus;
- (void)setMyMoney:(float)arg1;
- (float)myMoney;
- (void)changeMoney:(id)arg1;
- (void)dealloc;
- (id)initWithUserConfig:(id)arg1;

@end
