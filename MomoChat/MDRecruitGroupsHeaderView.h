//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface MDRecruitGroupsHeaderView : UIView
{
    id <MDRecruitGroupsHeaderViewDelegate> _delegate;
    long long _section;
    UIImageView *_leftIconImage;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_indicatorView;
}

@property(retain, nonatomic) UIImageView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *leftIconImage; // @synthesize leftIconImage=_leftIconImage;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) __weak id <MDRecruitGroupsHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didClickedHeaderView;
- (void)refreshWithLeftIcon:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
