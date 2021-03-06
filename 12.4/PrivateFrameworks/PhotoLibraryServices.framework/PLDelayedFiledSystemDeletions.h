//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PLDelayedFiledSystemDeletions : NSObject
{
    NSMutableArray *_deletionInfos;
}

+ (id)deletionsFromChangeHubEvent:(id)arg1;
+ (void)appendDescriptionForEvent:(id)arg1 toComponents:(id)arg2;
+ (void)waitForAllDelayedDeletionsToFinish;
+ (id)filesystemDeletionQueue;
- (id)initWithFilesystemDeletionInfos:(id)arg1;
- (void)deleteAllRemainingFilesAndThumbnailsWithPhotoLibrary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)appendToXPCMessage:(id)arg1 managedObjectContext:(id)arg2;
- (void)addFilesystemDeletionInfo:(id)arg1;
- (void)dealloc;
- (id)debugDescription;

@end

