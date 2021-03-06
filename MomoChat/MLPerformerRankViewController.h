//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MLUserRankViewController.h"

@class MLHighlightRankTableViewCell, UIImageView;

@interface MLPerformerRankViewController : MLUserRankViewController
{
    MLHighlightRankTableViewCell *_highlightCell;
    UIImageView *_headerIconView;
}

@property(retain, nonatomic) UIImageView *headerIconView; // @synthesize headerIconView=_headerIconView;
@property(retain, nonatomic) MLHighlightRankTableViewCell *highlightCell; // @synthesize highlightCell=_highlightCell;
- (void).cxx_destruct;
- (void)removeCurrentUserRankView;
- (void)addCurrentUseRankView;
- (void)addHeaderIcon;
- (void)didReceiveMemoryWarning;
- (void)addContainerView;
- (void)addTitleView;
- (void)viewDidLoad;

@end

