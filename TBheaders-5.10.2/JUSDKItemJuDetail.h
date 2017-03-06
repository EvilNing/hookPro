//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JUSDKDOBase.h"

@class JUItemFeatureModel, JUSDKShopPositionData, NSArray, NSDate, NSDictionary, NSMutableArray, NSString;

@interface JUSDKItemJuDetail : JUSDKDOBase
{
    _Bool _pay_postage;	// 8 = 0x8
    _Bool _is_lock;	// 9 = 0x9
    _Bool _exist_hold_stock;	// 10 = 0xa
    _Bool _secKill;	// 11 = 0xb
    _Bool _isLimit;	// 12 = 0xc
    _Bool _isKillTypeItem;	// 13 = 0xd
    int _parent_category;	// 16 = 0x10
    int _child_category;	// 20 = 0x14
    int _item_type;	// 24 = 0x18
    int _juwl_item_type;	// 28 = 0x1c
    int _platform_id;	// 32 = 0x20
    int _seller_credit;	// 36 = 0x24
    int _category_id;	// 40 = 0x28
    int _sold_count;	// 44 = 0x2c
    int _current_stock;	// 48 = 0x30
    int _weight;	// 52 = 0x34
    int _isLocalNotify;	// 56 = 0x38
    int _limitNum;	// 60 = 0x3c
    int _buyWay;	// 64 = 0x40
    int _itemCount;	// 68 = 0x44
    NSString *_ju_id;	// 72 = 0x48
    NSString *_pic_wide_url;	// 80 = 0x50
    NSString *_pic_wide_url_3to2;	// 88 = 0x58
    NSString *_item_id;	// 96 = 0x60
    NSString *_long_name;	// 104 = 0x68
    NSString *_short_name;	// 112 = 0x70
    JUItemFeatureModel *_pic_feature;	// 120 = 0x78
    NSString *_item_url;	// 128 = 0x80
    NSString *_ju_item_url;	// 136 = 0x88
    NSString *_shop_type;	// 144 = 0x90
    double _original_price;	// 152 = 0x98
    NSString *_hangtagPrice;	// 160 = 0xa0
    NSString *_pic_url;	// 168 = 0xa8
    NSString *_current_show_url;	// 176 = 0xb0
    double _activity_price;	// 184 = 0xb8
    NSString *_city;	// 192 = 0xc0
    NSString *_item_status;	// 200 = 0xc8
    NSString *_item_guarantee;	// 208 = 0xd0
    NSString *_discount;	// 216 = 0xd8
    long long _group_id;	// 224 = 0xe0
    long long _seller_id;	// 232 = 0xe8
    NSString *_seller_nick;	// 240 = 0xf0
    NSString *_pic_url_from_ic;	// 248 = 0xf8
    NSString *_online_start_time;	// 256 = 0x100
    NSString *_online_end_time;	// 264 = 0x108
    JUSDKShopPositionData *_shop_position_list;	// 272 = 0x110
    NSString *_descUrl;	// 280 = 0x118
    NSString *_categoryId;	// 288 = 0x120
    NSString *_childCategory;	// 296 = 0x128
    NSString *_itemDisplayStatus;	// 304 = 0x130
    NSDate *_startTime;	// 312 = 0x138
    NSDate *_endTime;	// 320 = 0x140
    NSString *_supportAllPromotion;	// 328 = 0x148
    NSString *_imageLabel;	// 336 = 0x150
    NSArray *_itemTagInfoIds;	// 344 = 0x158
    NSArray *_showTagNames;	// 352 = 0x160
    NSMutableArray *_groupedIds;	// 360 = 0x168
    NSString *_openDisplayItemTagCode;	// 368 = 0x170
    NSMutableArray *_itemTagInfos;	// 376 = 0x178
    NSString *_distance;	// 384 = 0x180
    NSString *_longitude;	// 392 = 0x188
    NSString *_latitude;	// 400 = 0x190
    NSString *_icon;	// 408 = 0x198
    NSString *_wlIcon;	// 416 = 0x1a0
    NSString *_degradedItemUrl;	// 424 = 0x1a8
    NSString *_tmallPointExchange;	// 432 = 0x1b0
    double _tmallPoint;	// 440 = 0x1b8
    NSString *_remindNum;	// 448 = 0x1c0
    NSDictionary *_trackParams;	// 456 = 0x1c8
    NSString *_itemLabel;	// 464 = 0x1d0
    NSString *_question;	// 472 = 0x1d8
    NSString *_payTimeout;	// 480 = 0x1e0
    NSString *_forecastCouponDiscount;	// 488 = 0x1e8
}

+ (int)groupCount;
+ (Class)classForName:(id)arg1;
@property(retain, nonatomic) NSString *forecastCouponDiscount; // @synthesize forecastCouponDiscount=_forecastCouponDiscount;
@property(retain, nonatomic) NSString *payTimeout; // @synthesize payTimeout=_payTimeout;
@property(copy, nonatomic) NSString *question; // @synthesize question=_question;
@property(retain, nonatomic) NSString *itemLabel; // @synthesize itemLabel=_itemLabel;
@property(retain, nonatomic) NSDictionary *trackParams; // @synthesize trackParams=_trackParams;
@property(retain, nonatomic) NSString *remindNum; // @synthesize remindNum=_remindNum;
@property(nonatomic) int itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) double tmallPoint; // @synthesize tmallPoint=_tmallPoint;
@property(retain, nonatomic) NSString *tmallPointExchange; // @synthesize tmallPointExchange=_tmallPointExchange;
@property(retain, nonatomic) NSString *degradedItemUrl; // @synthesize degradedItemUrl=_degradedItemUrl;
@property(nonatomic) int buyWay; // @synthesize buyWay=_buyWay;
@property(retain, nonatomic) NSString *wlIcon; // @synthesize wlIcon=_wlIcon;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(nonatomic) _Bool isKillTypeItem; // @synthesize isKillTypeItem=_isKillTypeItem;
@property(nonatomic) _Bool isLimit; // @synthesize isLimit=_isLimit;
@property(nonatomic) _Bool secKill; // @synthesize secKill=_secKill;
@property(nonatomic) int limitNum; // @synthesize limitNum=_limitNum;
@property(retain, nonatomic) NSMutableArray *itemTagInfos; // @synthesize itemTagInfos=_itemTagInfos;
@property(retain, nonatomic) NSString *openDisplayItemTagCode; // @synthesize openDisplayItemTagCode=_openDisplayItemTagCode;
@property(retain, nonatomic) NSMutableArray *groupedIds; // @synthesize groupedIds=_groupedIds;
@property(retain, nonatomic) NSArray *showTagNames; // @synthesize showTagNames=_showTagNames;
@property(retain, nonatomic) NSArray *itemTagInfoIds; // @synthesize itemTagInfoIds=_itemTagInfoIds;
@property(retain, nonatomic) NSString *imageLabel; // @synthesize imageLabel=_imageLabel;
@property(retain, nonatomic) NSString *supportAllPromotion; // @synthesize supportAllPromotion=_supportAllPromotion;
@property(nonatomic) int isLocalNotify; // @synthesize isLocalNotify=_isLocalNotify;
@property(readonly, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *itemDisplayStatus; // @synthesize itemDisplayStatus=_itemDisplayStatus;
@property(retain, nonatomic) NSString *childCategory; // @synthesize childCategory=_childCategory;
@property(retain, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(retain, nonatomic) NSString *descUrl; // @synthesize descUrl=_descUrl;
@property(nonatomic) int weight; // @synthesize weight=_weight;
@property(retain, nonatomic) JUSDKShopPositionData *shop_position_list; // @synthesize shop_position_list=_shop_position_list;
@property(retain, nonatomic) NSString *online_end_time; // @synthesize online_end_time=_online_end_time;
@property(retain, nonatomic) NSString *online_start_time; // @synthesize online_start_time=_online_start_time;
@property(nonatomic) _Bool exist_hold_stock; // @synthesize exist_hold_stock=_exist_hold_stock;
@property(nonatomic) int current_stock; // @synthesize current_stock=_current_stock;
@property(nonatomic) _Bool is_lock; // @synthesize is_lock=_is_lock;
@property(retain, nonatomic) NSString *pic_url_from_ic; // @synthesize pic_url_from_ic=_pic_url_from_ic;
@property(nonatomic) int sold_count; // @synthesize sold_count=_sold_count;
@property(nonatomic) int category_id; // @synthesize category_id=_category_id;
@property(nonatomic) int seller_credit; // @synthesize seller_credit=_seller_credit;
@property(retain, nonatomic) NSString *seller_nick; // @synthesize seller_nick=_seller_nick;
@property(nonatomic) long long seller_id; // @synthesize seller_id=_seller_id;
@property(nonatomic) long long group_id; // @synthesize group_id=_group_id;
@property(nonatomic) int platform_id; // @synthesize platform_id=_platform_id;
@property(retain, nonatomic) NSString *discount; // @synthesize discount=_discount;
@property(retain, nonatomic) NSString *item_guarantee; // @synthesize item_guarantee=_item_guarantee;
@property(nonatomic) int juwl_item_type; // @synthesize juwl_item_type=_juwl_item_type;
@property(nonatomic) int item_type; // @synthesize item_type=_item_type;
@property(retain, nonatomic) NSString *item_status; // @synthesize item_status=_item_status;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(nonatomic) double activity_price; // @synthesize activity_price=_activity_price;
@property(retain, nonatomic) NSString *current_show_url; // @synthesize current_show_url=_current_show_url;
@property(retain, nonatomic) NSString *pic_url; // @synthesize pic_url=_pic_url;
@property(copy, nonatomic) NSString *hangtagPrice; // @synthesize hangtagPrice=_hangtagPrice;
@property(nonatomic) double original_price; // @synthesize original_price=_original_price;
@property(nonatomic) _Bool pay_postage; // @synthesize pay_postage=_pay_postage;
@property(retain, nonatomic) NSString *shop_type; // @synthesize shop_type=_shop_type;
@property(nonatomic) int child_category; // @synthesize child_category=_child_category;
@property(nonatomic) int parent_category; // @synthesize parent_category=_parent_category;
@property(retain, nonatomic) NSString *ju_item_url; // @synthesize ju_item_url=_ju_item_url;
@property(retain, nonatomic) NSString *item_url; // @synthesize item_url=_item_url;
@property(retain, nonatomic) JUItemFeatureModel *pic_feature; // @synthesize pic_feature=_pic_feature;
@property(retain, nonatomic) NSString *short_name; // @synthesize short_name=_short_name;
@property(retain, nonatomic) NSString *long_name; // @synthesize long_name=_long_name;
@property(retain, nonatomic) NSString *item_id; // @synthesize item_id=_item_id;
@property(retain, nonatomic) NSString *pic_wide_url_3to2; // @synthesize pic_wide_url_3to2=_pic_wide_url_3to2;
@property(retain, nonatomic) NSString *pic_wide_url; // @synthesize pic_wide_url=_pic_wide_url;
@property(retain, nonatomic) NSString *ju_id; // @synthesize ju_id=_ju_id;
- (void).cxx_destruct;
- (id)refreshKey:(id)arg1;
- (id)groupedItemTagInfoIds;
- (_Bool)isOnTimePrepared;
- (_Bool)isLiked;
- (void)delike;
- (void)like;
- (void)saveToDB;
- (_Bool)isCanSchedule;
@property(nonatomic) _Bool isNotSupportItem;
- (_Bool)isTmallPointExchange;
- (_Bool)isOutOfTime;
- (_Bool)isNoStock;
- (_Bool)isExsitingHolder;
- (_Bool)isWaitingForStart;
- (_Bool)isAvalible;
- (_Bool)needQuestion;
- (_Bool)hasCoupon;
- (_Bool)is5Second;
- (_Bool)isStatuEqualTo:(id)arg1;
- (id)keyValueMapping;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)init;

@end
