//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "MDSearchDisplayViewControllerDelegate.h"
#import "MomoShareHandlerDelegate.h"
#import "MomoShareManagerDelegate.h"

@class MBProgressHUD, MDContactSearchDisplayViewController, MDRefreshGifHeader, MDSearchBar, MomoShareHandler, MomoShareManager, MomoTapView, NSString, UITableView, UIView;

@interface MomoShareController : MDViewController <MomoShareHandlerDelegate, MDSearchDisplayViewControllerDelegate, MomoShareManagerDelegate>
{
    MBProgressHUD *hud;
    MDSearchBar *searchBar;
    MDContactSearchDisplayViewController *searchDisplayController;
    _Bool presented;
    MomoShareHandler *selectFriendsHandler;
    MomoShareManager *selectFriendsManager;
    long long _currentType;
    UITableView *shareTableView;
    UIView *backView;
    id <MomoShareProtocol> _delegate;
    MomoTapView *_tapView;
    MDRefreshGifHeader *_refreshHeader;
}

@property(retain, nonatomic) MDRefreshGifHeader *refreshHeader; // @synthesize refreshHeader=_refreshHeader;
@property(retain, nonatomic) MomoTapView *tapView; // @synthesize tapView=_tapView;
@property(nonatomic) id <MomoShareProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *backView; // @synthesize backView;
@property(retain, nonatomic) UITableView *shareTableView; // @synthesize shareTableView;
@property(readonly, nonatomic) long long currentType; // @synthesize currentType=_currentType;
@property(nonatomic) _Bool presented; // @synthesize presented;
@property(retain, nonatomic) MomoShareManager *selectFriendsManager; // @synthesize selectFriendsManager;
@property(retain, nonatomic) MomoShareHandler *selectFriendsHandler; // @synthesize selectFriendsHandler;
- (void).cxx_destruct;
- (void)enableSubViewEndSearch;
- (void)disableSubViewBeginSearch;
- (_Bool)searchDisplayControllerShouldShowNoResult;
- (void)filterWithWording:(id)arg1;
- (void)searchDisplayControllerClickSearch:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch;
- (void)searchDisplayControllerWillBeginSearch;
- (_Bool)shouldSearch;
- (void)loadData;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showFailMsg:(id)arg1;
- (void)showErrorMsg;
- (void)refreshTableView;
- (void)reloadData;
- (void)refreshSubViews;
- (void)removeHud;
- (void)showHud;
- (void)addTableView;
- (void)addBackView;
- (void)addSearchBar;
- (void)configureNavBar;
- (void)didClickBack:(id)arg1;
- (void)goBackDelay;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSelectFriendType:(long long)arg1;
- (id)initWithSelectFriendType:(long long)arg1 shareDelegate:(id)arg2;
- (id)initWithSelectFriendType:(long long)arg1 friendSelectManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
