//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSArray, NSString;

@interface HelpMenuModel : JDModel
{
    _Bool _canUse;
    long long _itemId;
    NSString *_itemName;
    NSString *_itemIcon;
    NSString *_imageUrl;
    long long _type;
    NSString *_mUrl;
    long long _sort;
    NSArray *_childItem;
    NSString *_level;
}

@property(nonatomic) _Bool canUse; // @synthesize canUse=_canUse;
@property(retain, nonatomic) NSString *level; // @synthesize level=_level;
@property(retain, nonatomic) NSArray *childItem; // @synthesize childItem=_childItem;
@property(nonatomic) long long sort; // @synthesize sort=_sort;
@property(retain, nonatomic) NSString *mUrl; // @synthesize mUrl=_mUrl;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *itemIcon; // @synthesize itemIcon=_itemIcon;
@property(retain, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;

@end
