//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (SecureBackup)
- (id)errorByExtendingUserInfoWithDictionary:(id)arg1;
- (_Bool)isRecoveryPETSoftLimitError;
- (_Bool)isRecoveryPETHardLimitError;
- (_Bool)isCoolDownError;
- (_Bool)isLoginSoftLimit;
- (_Bool)isLoginHardLimit;
- (_Bool)isICSCRecoveryHardLimitError;
@end

