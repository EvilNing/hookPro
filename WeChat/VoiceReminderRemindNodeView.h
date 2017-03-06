//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageNodeView.h"

#import "IAudioReceiverExt.h"

@class UIButton, UIImageView;

@interface VoiceReminderRemindNodeView : BaseMessageNodeView <IAudioReceiverExt>
{
    UIImageView *_bkgImageView;
    UIButton *_playButton;
    long long _playCount;
    _Bool _playing;
}

+ (_Bool)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (id)getMoreMainInfomationAccessibilityDescription;
- (void)onMenuItemWillHide;
- (void)onTouchCancel;
- (void)onLongTouch;
- (void)onTouchUpInside;
- (void)onTouchDownRepeat;
- (void)onTouchDown;
- (void)onClearResource;
- (void)onDisappear;
- (void)layoutSubviewsInternal;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (void)OnEndPlaying:(unsigned int)arg1 isForceStop:(_Bool)arg2;
- (void)becomeNormalBackground;
- (void)becomeHighlighedBackground;
- (id)init;
- (void)initData;
- (void)initView;
- (void)dealloc;
- (void)onPlayClick;
- (void)stopPlayVoice;
- (void)startPlayVoice;

@end
