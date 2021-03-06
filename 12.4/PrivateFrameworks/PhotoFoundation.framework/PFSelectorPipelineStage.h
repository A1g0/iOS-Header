//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoFoundation/PFPipelineStage.h>

@interface PFSelectorPipelineStage : PFPipelineStage
{
    SEL _workSelector;
}

@property(readonly) SEL workSelector; // @synthesize workSelector=_workSelector;
- (void)invokeWorkForJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)description;
- (id)initWithWorkSelector:(SEL)arg1;

@end

