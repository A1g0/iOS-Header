//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class HFActionBuilder, HFMediaPlaybackActionBuilder, NSArray;

@protocol HFActionSetBuilderProtocol <NSObject>
@property(readonly, nonatomic) HFMediaPlaybackActionBuilder *mediaAction;
@property(readonly, nonatomic, getter=isAffectedByEndEvents) _Bool affectedByEndEvents;
@property(readonly, nonatomic) _Bool requiresDeviceUnlock;
@property(readonly, nonatomic) NSArray *actions;
- (void)removeAllActions;
- (void)removeAction:(HFActionBuilder *)arg1;
- (void)updateAction:(HFActionBuilder *)arg1;
- (void)addAction:(HFActionBuilder *)arg1;
@end

