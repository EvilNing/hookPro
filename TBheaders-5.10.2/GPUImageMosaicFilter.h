//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageTwoInputFilter.h"

@class GPUImagePicture;

@interface GPUImageMosaicFilter : GPUImageTwoInputFilter
{
    int inputTileSizeUniform;	// 296 = 0x128
    int numTilesUniform;	// 300 = 0x12c
    int displayTileSizeUniform;	// 304 = 0x130
    int colorOnUniform;	// 308 = 0x134
    GPUImagePicture *pic;	// 312 = 0x138
    _Bool _colorOn;	// 320 = 0x140
    float _numTiles;	// 324 = 0x144
    struct CGSize _inputTileSize;	// 328 = 0x148
    struct CGSize _displayTileSize;	// 344 = 0x158
}

@property(nonatomic) _Bool colorOn; // @synthesize colorOn=_colorOn;
@property(nonatomic) struct CGSize displayTileSize; // @synthesize displayTileSize=_displayTileSize;
@property(nonatomic) float numTiles; // @synthesize numTiles=_numTiles;
@property(nonatomic) struct CGSize inputTileSize; // @synthesize inputTileSize=_inputTileSize;
- (void).cxx_destruct;
- (void)setTileSet:(id)arg1;
- (id)init;

@end
