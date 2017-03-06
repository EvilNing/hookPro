//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class FTPopOverMenuView, NSArray, NSString, UIView;

@interface MDMomentPopOverView : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _isCurrentlyOnScreen;
    UIView *_backgroundView;
    FTPopOverMenuView *_popMenuView;
    CDUnknownBlockType _doneBlock;
    CDUnknownBlockType _dismissBlock;
    UIView *_sender;
    NSArray *_menuArray;
    NSArray *_menuImageArray;
    struct CGRect _senderFrame;
}

+ (void)dismiss;
+ (void)showFromSenderFrame:(struct CGRect)arg1 withMenu:(id)arg2 imageNameArray:(id)arg3 doneBlock:(CDUnknownBlockType)arg4 dismissBlock:(CDUnknownBlockType)arg5;
+ (void)showFromSenderFrame:(struct CGRect)arg1 withMenu:(id)arg2 doneBlock:(CDUnknownBlockType)arg3 dismissBlock:(CDUnknownBlockType)arg4;
+ (void)showFromEvent:(id)arg1 withMenu:(id)arg2 imageNameArray:(id)arg3 doneBlock:(CDUnknownBlockType)arg4 dismissBlock:(CDUnknownBlockType)arg5;
+ (void)showFromEvent:(id)arg1 withMenu:(id)arg2 doneBlock:(CDUnknownBlockType)arg3 dismissBlock:(CDUnknownBlockType)arg4;
+ (void)showForSender:(id)arg1 withMenu:(id)arg2 imageNameArray:(id)arg3 doneBlock:(CDUnknownBlockType)arg4 dismissBlock:(CDUnknownBlockType)arg5;
+ (void)showForSender:(id)arg1 withMenu:(id)arg2 doneBlock:(CDUnknownBlockType)arg3 dismissBlock:(CDUnknownBlockType)arg4;
+ (id)sharedInstance;
@property(nonatomic) _Bool isCurrentlyOnScreen; // @synthesize isCurrentlyOnScreen=_isCurrentlyOnScreen;
@property(retain, nonatomic) NSArray *menuImageArray; // @synthesize menuImageArray=_menuImageArray;
@property(retain, nonatomic) NSArray *menuArray; // @synthesize menuArray=_menuArray;
@property(nonatomic) struct CGRect senderFrame; // @synthesize senderFrame=_senderFrame;
@property(retain, nonatomic) UIView *sender; // @synthesize sender=_sender;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
@property(retain, nonatomic) FTPopOverMenuView *popMenuView; // @synthesize popMenuView=_popMenuView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)doneActionWithSelectedIndex:(long long)arg1;
- (void)dismiss;
- (void)show;
- (void)onBackgroundViewTapped:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)adjustPopOverMenu;
- (void)showForSender:(id)arg1 senderFrame:(struct CGRect)arg2 withMenu:(id)arg3 imageNameArray:(id)arg4 doneBlock:(CDUnknownBlockType)arg5 dismissBlock:(CDUnknownBlockType)arg6;
- (void)onChangeStatusBarOrientationNotification:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
