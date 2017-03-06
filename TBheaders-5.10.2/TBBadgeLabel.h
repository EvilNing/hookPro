//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIColor;

@interface TBBadgeLabel : UILabel
{
    UIColor *_badgeColor;	// 8 = 0x8
    double _badgeBorderWidth;	// 16 = 0x10
    UIColor *_badgeBorderColor;	// 24 = 0x18
    CDUnknownBlockType _fixedBadgeSizeBlock;	// 32 = 0x20
    struct CGSize _fixedBadgeSize;	// 40 = 0x28
    struct UIEdgeInsets _textMargins;	// 56 = 0x38
}

@property(copy, nonatomic) CDUnknownBlockType fixedBadgeSizeBlock; // @synthesize fixedBadgeSizeBlock=_fixedBadgeSizeBlock;
@property(nonatomic) struct CGSize fixedBadgeSize; // @synthesize fixedBadgeSize=_fixedBadgeSize;
@property(nonatomic) struct UIEdgeInsets textMargins; // @synthesize textMargins=_textMargins;
@property(retain, nonatomic) UIColor *badgeBorderColor; // @synthesize badgeBorderColor=_badgeBorderColor;
@property(nonatomic) double badgeBorderWidth; // @synthesize badgeBorderWidth=_badgeBorderWidth;
@property(retain, nonatomic) UIColor *badgeColor; // @synthesize badgeColor=_badgeColor;
- (void).cxx_destruct;
- (void)setText:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct UIEdgeInsets)textMarginsWithBadgeBorder;

@end
