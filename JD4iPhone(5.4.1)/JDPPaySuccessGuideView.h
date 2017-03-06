//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class NSString;

@interface JDPPaySuccessGuideView : UIView <UITextViewDelegate>
{
    _Bool _isFullSreen;
    double _offsetY;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) _Bool isFullSreen; // @synthesize isFullSreen=_isFullSreen;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
- (void).cxx_destruct;
- (void)clicked:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)private_drawButton;
- (void)private_drawSubTitleLabel;
- (void)private_drawTitleLabel;
- (void)private_drawTextView;
- (void)private_drawImageView;
- (id)initWithFullScreen:(_Bool)arg1 Handler:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
