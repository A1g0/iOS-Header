//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCRedundancyControlAlgorithm-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCRedundancyControlAlgorithmVideoMultiway : NSObject <VCRedundancyControlAlgorithm>
{
    unsigned int _redundancyPercentage;
    double _redundancyInterval;
    double _packetLossPercentages[20];
    double _roundTripTime;
    double _packetLossThreshold;
    unsigned int _targetBitrate;
    unsigned int _packetLossWindowSize;
    unsigned int _packetLossPercentageIndex;
    int _mode;
}

@property(readonly, nonatomic) double redundancyInterval; // @synthesize redundancyInterval=_redundancyInterval;
@property(readonly, nonatomic) unsigned int redundancyPercentage; // @synthesize redundancyPercentage=_redundancyPercentage;
- (void)updateInternalParametersWithMode:(int)arg1;
- (void)updateRoundTripTimeWithStatistics:(CDStruct_48a7b5a5)arg1;
- (void)updateRedundancyPercentage;
- (void)updateRedundancyStrategyWithNetworkStatistics:(CDStruct_48a7b5a5)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

