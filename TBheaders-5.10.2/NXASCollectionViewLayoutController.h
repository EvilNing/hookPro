//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NXASAbstractLayoutController.h"

@class NXCollectionView, UICollectionViewLayout;

@interface NXASCollectionViewLayoutController : NXASAbstractLayoutController
{
    NXCollectionView *_collectionView;	// 8 = 0x8
    UICollectionViewLayout *_collectionViewLayout;	// 16 = 0x10
    struct vector<CGRect, std::__1::allocator<CGRect>> _updateRangeBoundsIndexedByRangeType;	// 24 = 0x18
    long long _scrollableDirections;	// 48 = 0x30
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)shouldUpdateForVisibleIndexPaths:(id)arg1 viewportSize:(struct CGSize)arg2 rangeType:(long long)arg3;
- (id)indexPathsForItemsWithinRangeBounds:(struct CGRect)arg1;
- (struct NXASRangeGeometry)rangeGeometryWithScrollDirection:(long long)arg1 rangeTuningParameters:(CDStruct_2c43369c)arg2;
- (id)indexPathsForScrolling:(long long)arg1 viewportSize:(struct CGSize)arg2 rangeType:(long long)arg3;
- (id)initWithCollectionView:(id)arg1;

@end

