//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface ACDSRPCFieldType : TBJSONModel
{
    unsigned short _fieldId;	// 8 = 0x8
    int _typeEnum;	// 12 = 0xc
    NSString *_name;	// 16 = 0x10
    Class _clazz;	// 24 = 0x18
    Class _fClazz;	// 32 = 0x20
    Class _sClazz;	// 40 = 0x28
}

@property(nonatomic) int typeEnum; // @synthesize typeEnum=_typeEnum;
@property(nonatomic) Class sClazz; // @synthesize sClazz=_sClazz;
@property(nonatomic) Class fClazz; // @synthesize fClazz=_fClazz;
@property(nonatomic) Class clazz; // @synthesize clazz=_clazz;
@property(nonatomic) unsigned short fieldId; // @synthesize fieldId=_fieldId;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

