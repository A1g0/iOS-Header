//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class HFUpdateLogger, NSString;
@protocol HFCharacteristicReadPolicy;

@protocol HFCharacteristicValueOperationBatching <NSObject>
- (void)commitTransactionWithReason:(NSString *)arg1;
- (void)beginTransactionWithReason:(NSString *)arg1 readPolicy:(id <HFCharacteristicReadPolicy>)arg2 logger:(HFUpdateLogger *)arg3;
@end

