//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MyOrderItemDelegate.h"

@class NSArray, NSDictionary, NSString;

@interface BoxDisplayView : UIView <MyOrderItemDelegate>
{
    _Bool _hideFirstLine;
    double _numberInRow;
    double _rowHeight;
    NSArray *_dataArr;
    NSDictionary *_numberDic;
    NSDictionary *_messageDic;
    id <BoxDisplayViewDelegate> _delegate;
}

@property(nonatomic) __weak id <BoxDisplayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *messageDic; // @synthesize messageDic=_messageDic;
@property(retain, nonatomic) NSDictionary *numberDic; // @synthesize numberDic=_numberDic;
@property(retain, nonatomic) NSArray *dataArr; // @synthesize dataArr=_dataArr;
@property(nonatomic) _Bool hideFirstLine; // @synthesize hideFirstLine=_hideFirstLine;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(nonatomic) double numberInRow; // @synthesize numberInRow=_numberInRow;
- (void).cxx_destruct;
- (void)didOrderItemTapped:(id)arg1;
- (_Bool)isRedPointShow:(id)arg1;
- (void)showItemRedPoint:(id)arg1 show:(_Bool)arg2;
- (void)layoutItem:(id)arg1 withMessage:(id)arg2;
- (void)layoutItem:(id)arg1 withNumber:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

