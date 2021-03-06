//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceMemos/RCCompositionController.h>

@class NSString;

@interface RCSavedRecordingCompositionController : RCCompositionController
{
    NSString *_savedRecordingUUID;
}

+ (id)compositionControllerForExistingSavedRecordingUUID:(id)arg1;
+ (id)compositionControllerForExistingSavedRecording:(id)arg1;
+ (id)compositionControllerForCreatingSavedRecording;
@property(readonly, nonatomic) NSString *savedRecordingUUID; // @synthesize savedRecordingUUID=_savedRecordingUUID;
- (void).cxx_destruct;
- (void)performCompositionRedoWithRedoItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)performCompositionUndoWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)deleteCompositionFromFileSystemAndDatabase;
- (id)initWithExistingSavedRecordingUUID:(id)arg1;
- (id)initWithExistingSavedRecording:(id)arg1;
- (void)activeRecordingSessionWillFinish;
- (void)beginRecordingWithInputDevice:(id)arg1 captureInsertionRange:(CDStruct_73a5d3ca)arg2 isUndoable:(_Bool)arg3 isOverdub:(_Bool)arg4 sessionPreparedBlock:(CDUnknownBlockType)arg5 sessionFinishedBlock:(CDUnknownBlockType)arg6;
- (void)setComposition:(id)arg1;
- (id)initWithComposition:(id)arg1;

@end

