//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

#import "NSCoding.h"

@class NSString;

@interface WanderShopBannerListModel : JDModel <NSCoding>
{
    NSString *data;
    NSString *bannerURL;
    NSString *type;
    NSString *insertIndex;
}

@property(copy, nonatomic) NSString *insertIndex; // @synthesize insertIndex;
@property(copy, nonatomic) NSString *type; // @synthesize type;
@property(copy, nonatomic) NSString *bannerURL; // @synthesize bannerURL;
@property(copy, nonatomic) NSString *data; // @synthesize data;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDataWithDic:(id)arg1;
- (void)dealloc;

@end
