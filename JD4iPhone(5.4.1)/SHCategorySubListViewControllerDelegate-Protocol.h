//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CategoryPromotionInfoModel, CategorySecondModel, CategoryThirdModel, NSIndexPath, NSString, UIScrollView;

@protocol SHCategorySubListViewControllerDelegate <NSObject>
- (void)subDidSelectRankingWithCategorySecondModel:(CategorySecondModel *)arg1;
- (void)subDidSelectWithCategoryThirdItem:(CategoryThirdModel *)arg1 indexPath:(NSIndexPath *)arg2;

@optional
- (void)reloadMergePromotion;
- (void)loadMostUsePromotionFinishWithIsNeedToClearCache:(_Bool)arg1;
- (void)jumpNextTab:(long long)arg1;
- (void)subListCollectionViewDidScrollView:(UIScrollView *)arg1;
- (void)subListCollectionViewWillBeginScrollView:(UIScrollView *)arg1;
- (void)subDidSelectPromotionWithBannerSource:(NSString *)arg1 categoryPromotionItem:(CategoryPromotionInfoModel *)arg2 index:(long long)arg3;
@end
