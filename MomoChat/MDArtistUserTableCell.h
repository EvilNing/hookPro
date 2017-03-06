//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MDImageView, NSArray, NSString, UIImageView, UILabel;

@interface MDArtistUserTableCell : UITableViewCell
{
    UIImageView *_bgImageView;
    MDImageView *_userAvatar;
    UILabel *_nameLabel;
    UILabel *_signLabel;
    UIImageView *_imageView_a;
    UIImageView *_imageView_b;
    UIImageView *_imageView_c;
    UIImageView *_imageView_d;
    UIImageView *_imageView_e;
    UIImageView *_animatedImageView;
    NSString *_identifier;
    NSArray *_imageViews;
}

@property(retain, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) UIImageView *animatedImageView; // @synthesize animatedImageView=_animatedImageView;
@property(retain, nonatomic) UIImageView *imageView_e; // @synthesize imageView_e=_imageView_e;
@property(retain, nonatomic) UIImageView *imageView_d; // @synthesize imageView_d=_imageView_d;
@property(retain, nonatomic) UIImageView *imageView_c; // @synthesize imageView_c=_imageView_c;
@property(retain, nonatomic) UIImageView *imageView_b; // @synthesize imageView_b=_imageView_b;
@property(retain, nonatomic) UIImageView *imageView_a; // @synthesize imageView_a=_imageView_a;
@property(retain, nonatomic) UILabel *signLabel; // @synthesize signLabel=_signLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MDImageView *userAvatar; // @synthesize userAvatar=_userAvatar;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopAnimating;
- (void)startAnimating;
- (void)bindModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
