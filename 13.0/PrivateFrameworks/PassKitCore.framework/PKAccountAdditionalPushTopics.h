//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKAccountAdditionalPushTopics : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_account;
    NSString *_extendedAccount;
    NSString *_payments;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *payments; // @synthesize payments=_payments;
@property(copy, nonatomic) NSString *extendedAccount; // @synthesize extendedAccount=_extendedAccount;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

