//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSNSShopCardViewBinding.h"

@class TBSNSCardCover;

@interface TBSNSCardCoverViewBinding : TBSNSShopCardViewBinding
{
    TBSNSCardCover *_body;	// 8 = 0x8
}

+ (_Bool)hasLastLineBtn;
+ (_Bool)hasFeedRichTitle;
+ (_Bool)hasFeedComment;
+ (_Bool)hasFeedTitle;
+ (struct CGSize)getViewDynamicSize:(id)arg1 withData:(id)arg2;
@property(nonatomic) __weak TBSNSCardCover *body; // @synthesize body=_body;
- (void).cxx_destruct;
- (_Bool)refresh;
- (_Bool)bindingView;

@end
