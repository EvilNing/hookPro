//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SBJsonStreamParserDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary;
@protocol SBJsonStreamParserAdapterDelegate;

@interface SBJsonStreamParserAdapter : NSObject <SBJsonStreamParserDelegate>
{
    unsigned long long depth;	// 8 = 0x8
    NSMutableArray *array;	// 16 = 0x10
    NSMutableDictionary *dict;	// 24 = 0x18
    NSMutableArray *keyStack;	// 32 = 0x20
    NSMutableArray *stack;	// 40 = 0x28
    int currentType;	// 48 = 0x30
    id <SBJsonStreamParserAdapterDelegate> delegate;	// 56 = 0x38
    unsigned long long levelsToSkip;	// 64 = 0x40
}

@property unsigned long long levelsToSkip; // @synthesize levelsToSkip;
@property id <SBJsonStreamParserAdapterDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)parser:(id)arg1 foundString:(id)arg2;
- (void)parser:(id)arg1 foundNumber:(id)arg2;
- (void)parserFoundNull:(id)arg1;
- (void)parser:(id)arg1 foundBoolean:(_Bool)arg2;
- (void)parserFoundArrayEnd:(id)arg1;
- (void)parserFoundArrayStart:(id)arg1;
- (void)parserFoundObjectEnd:(id)arg1;
- (void)parser:(id)arg1 foundObjectKey:(id)arg2;
- (void)parserFoundObjectStart:(id)arg1;
- (void)parser:(id)arg1 found:(id)arg2;
- (void)pop;
- (id)init;

@end
