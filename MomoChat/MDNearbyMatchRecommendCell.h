//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "MDHeadArrayViewDelegate.h"

@class MDHeadArrayView, NSString, UIButton, UIImageView, UILabel;

@interface MDNearbyMatchRecommendCell : UITableViewCell <MDHeadArrayViewDelegate>
{
    id <MDNearbyMatchRecommendDelegate> _delegate;
    UIImageView *_backImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIButton *_matchBtn;
    MDHeadArrayView *_headArrayView;
    NSString *_matchGotoStr;
}

+ (double)cellHeight;
@property(retain, nonatomic) NSString *matchGotoStr; // @synthesize matchGotoStr=_matchGotoStr;
@property(retain, nonatomic) MDHeadArrayView *headArrayView; // @synthesize headArrayView=_headArrayView;
@property(retain, nonatomic) UIButton *matchBtn; // @synthesize matchBtn=_matchBtn;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(nonatomic) __weak id <MDNearbyMatchRecommendDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)headIconDidClicked:(id)arg1;
- (void)buttonClick;
- (void)decorateCellWithNearbyItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
