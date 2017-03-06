//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MLBaseViewController.h"

#import "MLRecordListCellDelegate.h"
#import "MLRecordVideoShareHandlerDelegate.h"
#import "MLShareViewDataSource.h"
#import "UIActionSheetDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class MBProgressHUD, MLRecordVideoShareHandler, MLShareViewController, MLVideoRecordModel, NSArray, NSMutableArray, NSString, UIButton, UICollectionView, UIImageView;

@interface MLRecordListViewController : MLBaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, MLRecordListCellDelegate, UIActionSheetDelegate, MLShareViewDataSource, MLRecordVideoShareHandlerDelegate, UIViewControllerTransitioningDelegate>
{
    UIImageView *_fakeImageView;
    UICollectionView *_collectionView;
    NSMutableArray *_recordArray;
    MLVideoRecordModel *_operationRecordModel;
    MBProgressHUD *_progressHUD;
    MLRecordVideoShareHandler *_shareHandler;
    UIButton *_shareBtn;
    MLShareViewController *_shareViewController;
    NSArray *_configureShareItems;
}

@property(retain, nonatomic) NSArray *configureShareItems; // @synthesize configureShareItems=_configureShareItems;
@property(retain, nonatomic) MLShareViewController *shareViewController; // @synthesize shareViewController=_shareViewController;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) MLRecordVideoShareHandler *shareHandler; // @synthesize shareHandler=_shareHandler;
@property(retain, nonatomic) MBProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(retain, nonatomic) MLVideoRecordModel *operationRecordModel; // @synthesize operationRecordModel=_operationRecordModel;
@property(retain, nonatomic) NSMutableArray *recordArray; // @synthesize recordArray=_recordArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIImageView *fakeImageView; // @synthesize fakeImageView=_fakeImageView;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)showMessage:(id)arg1;
- (void)removeHud;
- (void)showHud;
- (void)uploadVideoError:(id)arg1;
- (void)uploadVideoFailure:(id)arg1;
- (void)uploadVideoSuccess:(id)arg1;
- (void)toggleShareWithRecordVideo:(id)arg1;
- (void)shareUploadIfNeedWithRecordVideo:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didSelectedPlatform:(id)arg1 item:(id)arg2;
- (id)shareItemsFromPerformerConfig;
- (id)shareItems;
- (void)recordListCell:(id)arg1 moreHandleWith:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)backBtnClick:(id)arg1;
- (void)setupBarItems;
- (void)deleteRecordVideo:(id)arg1;
- (void)reloadRecordData;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
