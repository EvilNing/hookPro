//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TBNewDetailedListConfigureJSONModel, TBShareListTypeBean;

@interface TBNewDetailedListViewModel : NSObject
{
    _Bool _needSyncToSquare;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_introduction;	// 24 = 0x18
    TBShareListTypeBean *_typeBean;	// 32 = 0x20
    TBNewDetailedListConfigureJSONModel *_configureJSONModel;	// 40 = 0x28
}

+ (id)wishTypeBean;
+ (id)ordinaryTypeBean;
+ (id)emptyTypeBean;
+ (id)viewModelForWishDetailedList;
+ (id)viewModelForOrdinaryDetailedList;
@property(nonatomic) _Bool needSyncToSquare; // @synthesize needSyncToSquare=_needSyncToSquare;
@property(retain, nonatomic) TBNewDetailedListConfigureJSONModel *configureJSONModel; // @synthesize configureJSONModel=_configureJSONModel;
@property(copy, nonatomic) TBShareListTypeBean *typeBean; // @synthesize typeBean=_typeBean;
@property(copy, nonatomic) NSString *introduction; // @synthesize introduction=_introduction;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)updateWithConfigureJSONModel:(id)arg1;
- (id)init;

@end
