//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDSnapChatItem, NSDate, NSNumber, NSString;

@interface MDBaseMessage : NSObject
{
    _Bool _noreply;
    _Bool _isOrigin;
    _Bool _fold;
    _Bool _hasShowedVirtualGift;
    _Bool _moodAnimated;
    int _type;
    int _status;
    int _audioStatus;
    int _flag;
    float _process;
    int _bubbleType;
    unsigned long long _cate;
    NSNumber *_autoid;
    NSString *_msgid;
    NSString *_remoteid;
    NSString *_targetid;
    NSString *_body;
    NSString *_uuid;
    NSDate *_time;
    NSDate *_origTime;
    NSNumber *_dist;
    long long _contentType;
    NSString *_actions;
    NSString *_tailTitle;
    NSString *_tailAction;
    NSString *_tailIcon;
    NSString *_noreplyText;
    NSString *_noreplyTextV2;
    MDSnapChatItem *_snapItem;
    NSString *_voiceToText;
    NSString *_additionalText;
    NSString *_bubbleIdentifier;
    NSNumber *_realDist;
    long long _picLength;
    NSString *_textv2;
    long long _chatSourceType;
    long long _messageClassifyType;
    NSNumber *_retTimeInterval;
    unsigned long long _anchorType;
    NSString *_anchorText;
    unsigned long long _moodType;
    id _msglt;
    id _msglv;
}

+ (id)pureTargetid:(id)arg1;
+ (id)buildSessionKey:(id)arg1;
+ (id)messageWithAction:(id)arg1 body:(id)arg2 targetid:(id)arg3;
+ (id)messageWithLocalData:(id)arg1 type:(int)arg2 targetid:(id)arg3 origin:(_Bool)arg4 fileSize:(long long)arg5;
+ (id)messageWithLocation:(id)arg1 targetid:(id)arg2;
+ (id)messageWithEmotion:(id)arg1 targetid:(id)arg2;
+ (id)messageWithText:(id)arg1 targetid:(id)arg2;
+ (id)messageWithPacket:(id)arg1;
+ (id)message;
@property _Bool moodAnimated; // @synthesize moodAnimated=_moodAnimated;
@property _Bool hasShowedVirtualGift; // @synthesize hasShowedVirtualGift=_hasShowedVirtualGift;
@property(retain, nonatomic) id msglv; // @synthesize msglv=_msglv;
@property(retain, nonatomic) id msglt; // @synthesize msglt=_msglt;
@property unsigned long long moodType; // @synthesize moodType=_moodType;
@property(retain) NSString *anchorText; // @synthesize anchorText=_anchorText;
@property unsigned long long anchorType; // @synthesize anchorType=_anchorType;
@property(retain) NSNumber *retTimeInterval; // @synthesize retTimeInterval=_retTimeInterval;
@property long long messageClassifyType; // @synthesize messageClassifyType=_messageClassifyType;
@property _Bool fold; // @synthesize fold=_fold;
@property long long chatSourceType; // @synthesize chatSourceType=_chatSourceType;
@property(retain) NSString *textv2; // @synthesize textv2=_textv2;
@property long long picLength; // @synthesize picLength=_picLength;
@property _Bool isOrigin; // @synthesize isOrigin=_isOrigin;
@property(retain) NSNumber *realDist; // @synthesize realDist=_realDist;
@property(retain) NSString *bubbleIdentifier; // @synthesize bubbleIdentifier=_bubbleIdentifier;
@property(retain) NSString *additionalText; // @synthesize additionalText=_additionalText;
@property(retain) NSString *voiceToText; // @synthesize voiceToText=_voiceToText;
@property(retain) MDSnapChatItem *snapItem; // @synthesize snapItem=_snapItem;
@property(retain) NSString *noreplyTextV2; // @synthesize noreplyTextV2=_noreplyTextV2;
@property(retain) NSString *noreplyText; // @synthesize noreplyText=_noreplyText;
@property(retain) NSString *tailIcon; // @synthesize tailIcon=_tailIcon;
@property(retain) NSString *tailAction; // @synthesize tailAction=_tailAction;
@property(retain) NSString *tailTitle; // @synthesize tailTitle=_tailTitle;
@property int bubbleType; // @synthesize bubbleType=_bubbleType;
@property float process; // @synthesize process=_process;
@property(retain) NSString *actions; // @synthesize actions=_actions;
@property int flag; // @synthesize flag=_flag;
@property _Bool noreply; // @synthesize noreply=_noreply;
@property int audioStatus; // @synthesize audioStatus=_audioStatus;
@property int status; // @synthesize status=_status;
@property long long contentType; // @synthesize contentType=_contentType;
@property int type; // @synthesize type=_type;
@property(retain) NSNumber *dist; // @synthesize dist=_dist;
@property(retain) NSDate *origTime; // @synthesize origTime=_origTime;
@property(retain) NSDate *time; // @synthesize time=_time;
@property(retain) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain) NSString *body; // @synthesize body=_body;
@property(retain) NSString *targetid; // @synthesize targetid=_targetid;
@property(retain) NSString *remoteid; // @synthesize remoteid=_remoteid;
@property(retain) NSString *msgid; // @synthesize msgid=_msgid;
@property(retain) NSNumber *autoid; // @synthesize autoid=_autoid;
@property unsigned long long cate; // @synthesize cate=_cate;
- (void).cxx_destruct;
- (id)description;
- (id)toDictionary;
- (void)inDictionary:(id)arg1 setNotEmptyObject:(id)arg2 forKey:(id)arg3;
- (id)sessionKey;
- (id)moodText;
- (id)displayName;
- (_Bool)isHasTail;
- (_Bool)isEmptyMessage;
- (_Bool)hasDummyBody;
- (double)getDistValue;
- (id)guidOfImageMessage;
- (id)getAudioPathToPlay;
- (id)getParamFromBody:(id)arg1;
- (unsigned long long)videoTime;
- (id)videoSmallStaticImageFileName;
- (id)videoSmallStaticImageURLString;
- (id)videoFilename;
- (id)videoURLString;
- (unsigned long long)audioTime;
- (id)audioFilename;
- (id)audioURLString;
- (void)setBodyForImage:(id)arg1 size:(unsigned long long)arg2;
- (void)setBodyForVideo:(id)arg1 size:(long long)arg2 time:(unsigned long long)arg3 extension:(id)arg4;
- (void)setBodyForAudio:(id)arg1 size:(unsigned long long)arg2 time:(unsigned long long)arg3 extension:(id)arg4;
- (id)initWithAction:(id)arg1 body:(id)arg2 targetid:(id)arg3;
- (id)initWithLocalData:(id)arg1 type:(int)arg2 targetid:(id)arg3 origin:(_Bool)arg4 fileSize:(long long)arg5;
- (id)initWithLocation:(id)arg1 targetid:(id)arg2;
- (id)initWithEmotion:(id)arg1 targetid:(id)arg2;
- (id)initWithText:(id)arg1 targetid:(id)arg2;
- (id)initWithWithPacket:(id)arg1;
- (id)init;
- (void)baseInitialization;

@end

