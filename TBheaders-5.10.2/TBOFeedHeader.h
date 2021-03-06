//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ITBOModel-Protocol.h"

@class NSString, TBOAvatarImage, TBOFeed, TBOListView, UIImageView, UILabel;

@interface TBOFeedHeader : UIView <ITBOModel>
{
    id _model;	// 8 = 0x8
    id _owner;	// 16 = 0x10
    TBOAvatarImage *_feedAuthorAvatar;	// 24 = 0x18
    UILabel *_feedAuthorNameLabel;	// 32 = 0x20
    UILabel *_publishedAt;	// 40 = 0x28
    UILabel *_topicName;	// 48 = 0x30
    UILabel *_createdTime;	// 56 = 0x38
    UIImageView *_voteImage;	// 64 = 0x40
    UILabel *_voteText;	// 72 = 0x48
    TBOListView *_userTagIconViewList;	// 80 = 0x50
    TBOFeed *_localFeedData;	// 88 = 0x58
}

@property(retain, nonatomic) TBOFeed *localFeedData; // @synthesize localFeedData=_localFeedData;
@property(retain, nonatomic) TBOListView *userTagIconViewList; // @synthesize userTagIconViewList=_userTagIconViewList;
@property(retain, nonatomic) UILabel *voteText; // @synthesize voteText=_voteText;
@property(retain, nonatomic) UIImageView *voteImage; // @synthesize voteImage=_voteImage;
@property(retain, nonatomic) UILabel *createdTime; // @synthesize createdTime=_createdTime;
@property(retain, nonatomic) UILabel *topicName; // @synthesize topicName=_topicName;
@property(retain, nonatomic) UILabel *publishedAt; // @synthesize publishedAt=_publishedAt;
@property(retain, nonatomic) UILabel *feedAuthorNameLabel; // @synthesize feedAuthorNameLabel=_feedAuthorNameLabel;
@property(retain, nonatomic) TBOAvatarImage *feedAuthorAvatar; // @synthesize feedAuthorAvatar=_feedAuthorAvatar;
@property(nonatomic) __weak id owner; // @synthesize owner=_owner;
@property(retain, nonatomic) id model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

