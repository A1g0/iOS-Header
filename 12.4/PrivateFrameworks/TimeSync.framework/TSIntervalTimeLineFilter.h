//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TimeSync/TSTimeLineFilter.h>

@class NSObject, TSIntervalFilter;
@protocol OS_dispatch_queue;

@interface TSIntervalTimeLineFilter : TSTimeLineFilter
{
    unsigned long long _AAnchor[8];
    unsigned long long _BAnchor[8];
    long long _AEntries[8];
    long long _BEntries[8];
    NSObject<OS_dispatch_queue> *_syncQueue;
    long long _validIndex;
    TSIntervalFilter *_aIntervalFilter;
    TSIntervalFilter *_bIntervalFilter;
}

- (void)dealloc;
- (void)changeToNewFilterSize:(unsigned char)arg1;
- (void)resetFilterWithNewExpectedDomainAInterval:(unsigned long long)arg1 expectedDomainBInterval:(unsigned long long)arg2 multiIntervalCount:(unsigned int)arg3;
- (void)resetFilterWithNewExpectedDomainAInterval:(unsigned long long)arg1 expectedDomainBInterval:(unsigned long long)arg2;
- (void)resetFilter;
- (unsigned long long)domainBIntervalFromDomainAInterval:(unsigned long long)arg1;
- (unsigned long long)domainBTimeFromDomainATime:(unsigned long long)arg1;
- (unsigned long long)domainAIntervalFromDomainBInterval:(unsigned long long)arg1;
- (unsigned long long)domainATimeFromDomainBTime:(unsigned long long)arg1;
- (CDStruct_4bcfbbae)rateRatio;
- (void)addTimestamps:(CDStruct_4bcfbbae)arg1;
- (id)initWithExpectedDomainAInterval:(unsigned long long)arg1 expectedDomainBInterval:(unsigned long long)arg2 filterSize:(unsigned char)arg3;

@end

