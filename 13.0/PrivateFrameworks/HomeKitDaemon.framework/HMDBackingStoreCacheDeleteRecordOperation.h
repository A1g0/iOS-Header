//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, HMDBackingStoreCacheShareGroup, NSArray;

@interface HMDBackingStoreCacheDeleteRecordOperation : HMDBackingStoreOperation
{
    HMDBackingStoreCacheGroup *_group;
    HMDBackingStoreCacheShareGroup *_share;
    NSArray *_recordNames;
}

@property(retain, nonatomic) NSArray *recordNames; // @synthesize recordNames=_recordNames;
@property(retain, nonatomic) HMDBackingStoreCacheShareGroup *share; // @synthesize share=_share;
@property(retain, nonatomic) HMDBackingStoreCacheGroup *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (id)mainReturningError;
- (id)initWithShareGroup:(id)arg1 recordNames:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (id)initWithGroup:(id)arg1 recordNames:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (id)initWithGroup:(id)arg1 share:(id)arg2 recordNames:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;

@end

