//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/_NURenderResult.h>

#import <PhotoImaging/PIAutoLoopAnalysisResult-Protocol.h>

@class NSDictionary, NSString;
@protocol NURenderStatistics;

@interface _PIAutoLoopAnalysisResult : _NURenderResult <PIAutoLoopAnalysisResult>
{
    NSDictionary *_recipe;
}

@property(retain) NSDictionary *recipe; // @synthesize recipe=_recipe;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end

