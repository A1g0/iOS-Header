//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KeychainCircle/NSObject-Protocol.h>

@class NSData;

@protocol KCJoiningAcceptCircleDelegate <NSObject>
- (NSData *)circleGetInitialSyncViews:(id *)arg1;
- (NSData *)circleJoinDataFor:(struct __OpaqueSOSPeerInfo *)arg1 error:(id *)arg2;
@end

