//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBSNSShopBannerMtSubItem : TBJSONModel
{
    NSString *_image;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_url;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (id)getImageUrl;

@end
