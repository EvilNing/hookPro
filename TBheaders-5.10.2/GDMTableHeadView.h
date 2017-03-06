//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TBCycleScrollViewDatasource-Protocol.h"
#import "TBCycleScrollViewDelegate-Protocol.h"

@class NSArray, NSString, UIPageControl, UIScrollView;

@interface GDMTableHeadView : UIView <TBCycleScrollViewDelegate, TBCycleScrollViewDatasource>
{
    NSArray *_adArray;	// 8 = 0x8
    NSString *_ctrPage;	// 16 = 0x10
    UIScrollView *_scrollView;	// 24 = 0x18
    UIPageControl *_pageControl;	// 32 = 0x20
    NSArray *_scrollImagesString;	// 40 = 0x28
}

@property(retain, nonatomic) NSArray *scrollImagesString; // @synthesize scrollImagesString=_scrollImagesString;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)didClickPage:(id)arg1 atIndex:(long long)arg2;
- (id)csView:(id)arg1 pageAtIndex:(long long)arg2;
- (long long)numberOfPages:(id)arg1;
- (void)onIconCallBack:(id)arg1;
- (void)initScrollViewWithAdArray:(id)arg1 withCtrPage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
