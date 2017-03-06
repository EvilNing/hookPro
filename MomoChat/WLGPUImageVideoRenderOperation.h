//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "GPUImageMovieDelegate.h"

@class GPUImageMovie, NSObject<OS_dispatch_semaphore>, NSString;

@interface WLGPUImageVideoRenderOperation : NSOperation <GPUImageMovieDelegate>
{
    _Bool _processing;
    CDUnknownBlockType _didStartRenderingHandler;
    GPUImageMovie *_movie;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property _Bool processing; // @synthesize processing=_processing;
@property(retain) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain) GPUImageMovie *movie; // @synthesize movie=_movie;
@property(copy, nonatomic) CDUnknownBlockType didStartRenderingHandler; // @synthesize didStartRenderingHandler=_didStartRenderingHandler;
- (void).cxx_destruct;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (void)didCompletePlayingMovie;
- (void)cancel;
- (void)main;
- (id)initWithGPUImageMovie:(id)arg1 filter:(id)arg2 renderTarget:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
