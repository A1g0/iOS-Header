//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSTransaction;

@interface _BSTransactionChildRelationship : NSObject
{
    BSTransaction *_childTransaction;
    unsigned long long _schedulingPolicy;
}

@property(readonly, nonatomic) unsigned long long schedulingPolicy; // @synthesize schedulingPolicy=_schedulingPolicy;
@property(readonly, nonatomic) BSTransaction *childTransaction; // @synthesize childTransaction=_childTransaction;
- (void).cxx_destruct;
- (id)initWithChildTransaction:(id)arg1 schedulingPolicy:(unsigned long long)arg2;

@end

