//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSString, UIPageControl, UIScrollView;

@interface JDInfiniteScrollView : UIView <UIScrollViewDelegate>
{
    UIPageControl *_pageControl;
    unsigned long long _numberOfItems;
    _Bool _scrolling;
    id <JDInfiniteScrollViewDataSource> _dataSource;
    long long _currentPageIndex;
    id <JDInfiniteScrollViewDelegate> _delegate;
    UIScrollView *_scrollView;
    NSArray *_itemViews;
}

@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) id <JDInfiniteScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(nonatomic) id <JDInfiniteScrollViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)updatePage:(id)arg1;
- (void)updateCurrentPageIndex;
@property(readonly, nonatomic) NSArray *itemViews; // @synthesize itemViews=_itemViews;
- (id)lastPlaceHolder;
- (id)firstPlaceHolder;
- (id)currentItemView;
- (id)itemViewAtIndex:(long long)arg1;
- (void)previousPage;
- (void)nextPage;
- (void)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)scrollToItemAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)addPage:(id)arg1 atPosition:(unsigned long long)arg2;
- (void)reloadData;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)createSubviews;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

