//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSArray, NSString;

@interface PD3CGiftPoolModel : JDModel
{
    NSString *_total;
    NSString *_canSelNum;
    NSString *_imgDomain;
    NSArray *_giftPools;
    NSArray *_selectedGiftArray;
    NSArray *_selectedGiftsIdArray;
}

@property(copy, nonatomic) NSArray *selectedGiftsIdArray; // @synthesize selectedGiftsIdArray=_selectedGiftsIdArray;
@property(copy, nonatomic) NSArray *selectedGiftArray; // @synthesize selectedGiftArray=_selectedGiftArray;
@property(copy, nonatomic) NSArray *giftPools; // @synthesize giftPools=_giftPools;
@property(copy, nonatomic) NSString *imgDomain; // @synthesize imgDomain=_imgDomain;
@property(copy, nonatomic) NSString *canSelNum; // @synthesize canSelNum=_canSelNum;
@property(copy, nonatomic) NSString *total; // @synthesize total=_total;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

