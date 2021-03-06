//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMTranscoder_TextRendering, NSArray;
@protocol OS_dispatch_queue;

@interface IMTranscodingAgentController : NSObject
{
    NSArray *_transcoders;
    NSArray *_fallbackTranscoders;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_textValidationQueue;
    NSObject<OS_dispatch_queue> *_previewGenerationQueue;
    IMTranscoder_TextRendering *_textTranscoder;
}

+ (id)sharedInstance;
- (void)generatePreview:(id)arg1 previewURL:(id)arg2 constraints:(struct IMPreviewConstraints)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)generateSnapshotForMessageGUID:(id)arg1 payloadURL:(id)arg2 balloonBundleID:(id)arg3 isFromMe:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)validateTextRenderingForMessage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)validateFileTransfer:(id)arg1 utiType:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)transcodeFileTransferData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 fallBack:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 maxDimension:(unsigned long long)arg6 transcoderUserInfo:(id)arg7 fallback:(_Bool)arg8 representations:(long long)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (_Bool)shouldProcessFileTransfer:(id)arg1 utiType:(id)arg2 transcoderUserInfo:(id)arg3 target:(long long)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(unsigned long long)arg6;
- (id)_findTranscoderForUTI:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_registerTranscoders;

@end

