//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol OS_dispatch_queue, _DKKnowledgeQuerying;

@interface ARPCorrelationTaskScheduler : NSObject
{
    id <_DKKnowledgeQuerying> _knowledgeStore;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_bookmark;
}

@property(copy) NSDate *bookmark; // @synthesize bookmark=_bookmark;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
- (void).cxx_destruct;
- (void)executeCorrelationTask;
- (void)_executeCorrelationTask;
- (void)nowPlayingEventInserted:(id)arg1;
- (void)dealloc;
- (id)initWithKnowledgeStore:(id)arg1;

@end

