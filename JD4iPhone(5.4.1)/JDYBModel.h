//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSArray, NSString;

@interface JDYBModel : JDModel
{
    NSString *SkuID;
    NSArray *YBTongVOs;
}

@property(retain, nonatomic) NSArray *YBTongVOs; // @synthesize YBTongVOs;
@property(retain, nonatomic) NSString *SkuID; // @synthesize SkuID;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;
- (id)createYBTongVOs:(id)arg1;

@end

