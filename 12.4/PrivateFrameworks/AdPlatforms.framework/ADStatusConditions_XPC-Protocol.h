//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol ADStatusConditions_XPC
- (void)isStatusConditionRegistered:(NSString *)arg1 bundleIdentifier:(NSString *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)clearStatusCondition:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setStatusCondition:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

