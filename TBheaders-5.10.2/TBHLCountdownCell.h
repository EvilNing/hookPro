//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBHLBaseFeedCell.h"

@class NSTimer, UILabel;

@interface TBHLCountdownCell : TBHLBaseFeedCell
{
    UILabel *_descLabel;	// 8 = 0x8
    UILabel *_dayLabel;	// 16 = 0x10
    UILabel *_dayDescLabel;	// 24 = 0x18
    UILabel *_hourLabel;	// 32 = 0x20
    UILabel *_hourDescLabel;	// 40 = 0x28
    UILabel *_minLabel;	// 48 = 0x30
    UILabel *_minDescLabel;	// 56 = 0x38
    NSTimer *_timer;	// 64 = 0x40
    double _endTimeInterval;	// 72 = 0x48
}

@property(nonatomic) double endTimeInterval; // @synthesize endTimeInterval=_endTimeInterval;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UILabel *minDescLabel; // @synthesize minDescLabel=_minDescLabel;
@property(retain, nonatomic) UILabel *minLabel; // @synthesize minLabel=_minLabel;
@property(retain, nonatomic) UILabel *hourDescLabel; // @synthesize hourDescLabel=_hourDescLabel;
@property(retain, nonatomic) UILabel *hourLabel; // @synthesize hourLabel=_hourLabel;
@property(retain, nonatomic) UILabel *dayDescLabel; // @synthesize dayDescLabel=_dayDescLabel;
@property(retain, nonatomic) UILabel *dayLabel; // @synthesize dayLabel=_dayLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
- (void).cxx_destruct;
- (_Bool)isInvalidation;
- (void)updateLabel;
- (void)setEndTime:(id)arg1;
- (void)timeStampToNSString:(long long)arg1;
- (id)formatWithInt:(long long)arg1;
- (void)cellClick;
- (void)configHLCell:(id)arg1;
- (void)layoutSubviews;
- (void)setStyle:(id)arg1 desc:(id)arg2;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

@end
