//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBXSearchComboViewModelBase.h"

@class TBSearchNXModel, TBXSearchService;

@interface TBXSearchComboNXViewModel : TBXSearchComboViewModelBase
{
    TBSearchNXModel *_dataModel;	// 8 = 0x8
    TBXSearchService *_service;	// 16 = 0x10
}

@property(retain, nonatomic) TBXSearchService *service; // @synthesize service=_service;
@property(retain, nonatomic) TBSearchNXModel *dataModel; // @synthesize dataModel=_dataModel;
- (void).cxx_destruct;
- (id)initWithModel:(id)arg1;

@end
