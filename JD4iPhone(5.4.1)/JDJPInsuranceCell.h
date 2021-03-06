//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "JDBaseToastTextListViewDataSource.h"
#import "JDBaseToastViewDelegate.h"

@class JDJPInsuranceModel, JDJPSwitchView, NSString, UIButton, UILabel;

@interface JDJPInsuranceCell : UITableViewCell <JDBaseToastTextListViewDataSource, JDBaseToastViewDelegate>
{
    UILabel *nameLabel;
    UIButton *tipButton;
    UILabel *priceLabel;
    UILabel *introLabel;
    _Bool _isInt;
    int _passengerNum;
    int _transferCount;
    JDJPSwitchView *_insuSwitch;
    JDJPInsuranceModel *_insuModel;
}

@property(nonatomic) _Bool isInt; // @synthesize isInt=_isInt;
@property(retain, nonatomic) JDJPInsuranceModel *insuModel; // @synthesize insuModel=_insuModel;
@property(nonatomic) int transferCount; // @synthesize transferCount=_transferCount;
@property(nonatomic) int passengerNum; // @synthesize passengerNum=_passengerNum;
@property(retain, nonatomic) JDJPSwitchView *insuSwitch; // @synthesize insuSwitch=_insuSwitch;
- (void)changeSwitch:(_Bool)arg1;
- (void)switchTapGesture:(id)arg1;
- (id)toastView:(id)arg1 DetailForSection:(long long)arg2;
- (id)toastView:(id)arg1 titleForSection:(long long)arg2;
- (long long)numberOfSectionsInToastView:(id)arg1;
- (void)tipButtonClick;
- (void)sendPriceChangeNotification;
- (void)displayPrice;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

