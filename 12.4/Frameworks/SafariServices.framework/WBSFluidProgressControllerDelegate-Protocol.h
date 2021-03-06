//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class WBSFluidProgressController, WBSFluidProgressState;

@protocol WBSFluidProgressControllerDelegate <NSObject>
- (void)fluidProgressController:(WBSFluidProgressController *)arg1 setProgressToCurrentPosition:(WBSFluidProgressState *)arg2;
- (void)fluidProgressControllerFinishProgressBar:(WBSFluidProgressController *)arg1 animateFillFade:(_Bool)arg2;
- (void)fluidProgressController:(WBSFluidProgressController *)arg1 startFluidProgressBar:(WBSFluidProgressState *)arg2 animateFillFade:(_Bool)arg3;
- (void)fluidProgressController:(WBSFluidProgressController *)arg1 updateFluidProgressBar:(WBSFluidProgressState *)arg2;
@end

