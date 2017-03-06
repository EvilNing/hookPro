//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LVProtocal-Protocol.h"

@class LView, NSMutableDictionary, NSString;

@interface LVNativeObjBox : NSObject <LVProtocal>
{
    _Bool _weakMode;	// 8 = 0x8
    _Bool _openAllMethod;	// 9 = 0x9
    LView *_lv_lview;	// 16 = 0x10
    struct _LVUserDataInfo *_lv_userData;	// 24 = 0x18
    id _realObject;	// 32 = 0x20
    id _realObjectWeak;	// 40 = 0x28
    NSMutableDictionary *_methods;	// 48 = 0x30
    NSMutableDictionary *_apiHashtable;	// 56 = 0x38
}

+ (int)classDefine:(struct lv_State *)arg1;
+ (int)unregisteObjectWithL:(struct lv_State *)arg1 name:(id)arg2;
+ (int)registeObjectWithL:(struct lv_State *)arg1 nativeObject:(id)arg2 name:(id)arg3 sel:(SEL)arg4 weakMode:(_Bool)arg5;
@property(retain, nonatomic) NSMutableDictionary *apiHashtable; // @synthesize apiHashtable=_apiHashtable;
@property(retain, nonatomic) NSMutableDictionary *methods; // @synthesize methods=_methods;
@property(nonatomic) _Bool openAllMethod; // @synthesize openAllMethod=_openAllMethod;
@property(nonatomic) __weak id realObjectWeak; // @synthesize realObjectWeak=_realObjectWeak;
@property(retain, nonatomic) id realObject; // @synthesize realObject=_realObject;
@property(nonatomic) _Bool weakMode; // @synthesize weakMode=_weakMode;
@property(nonatomic) struct _LVUserDataInfo *lv_userData; // @synthesize lv_userData=_lv_userData;
@property(nonatomic) __weak LView *lv_lview; // @synthesize lv_lview=_lv_lview;
- (void).cxx_destruct;
- (_Bool)isApiExist:(id)arg1;
- (int)performMethod:(id)arg1 L:(struct lv_State *)arg2;
- (void)addMethod:(id)arg1;
- (id)lv_nativeObject;
- (id)className;
- (_Bool)isOCClass;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)init:(struct lv_State *)arg1 nativeObject:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
