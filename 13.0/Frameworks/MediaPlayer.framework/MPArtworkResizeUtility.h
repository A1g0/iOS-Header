//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface MPArtworkResizeUtility : NSObject
{
    NSObject<OS_dispatch_queue> *_artworkResizingAccessQueue;
    NSOperationQueue *_artworkResizingOperationQueue;
    NSMapTable *_artworkResizingOperations;
}

@property(retain, nonatomic) NSMapTable *artworkResizingOperations; // @synthesize artworkResizingOperations=_artworkResizingOperations;
@property(retain, nonatomic) NSOperationQueue *artworkResizingOperationQueue; // @synthesize artworkResizingOperationQueue=_artworkResizingOperationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *artworkResizingAccessQueue; // @synthesize artworkResizingAccessQueue=_artworkResizingAccessQueue;
- (void).cxx_destruct;
- (void)cancelResizeImage:(id)arg1;
- (id)resizeImage:(id)arg1 scaledFittingSize:(struct CGSize)arg2 useExactFittingSizeAsDestinationSize:(_Bool)arg3 saveToDestinationURL:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)init;

@end

