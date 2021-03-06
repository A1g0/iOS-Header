//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SFKeychainItemAttributes-Protocol.h>

@class NSString, _SFAsymmetricKeySpecifier;

@interface SFIdentityAttributes : NSObject <SFKeychainItemAttributes>
{
    id _identityAttributesInternal;
    struct NSString *_privateKeyDomain;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *privateKeyDomain; // @synthesize privateKeyDomain=_privateKeyDomain;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasCertificate;
@property(copy, nonatomic) NSString *identityName;
- (void)setKeySpecifier:(id)arg1;
@property(readonly, copy, nonatomic) _SFAsymmetricKeySpecifier *keySpecifier;
@property(copy, nonatomic) NSString *localizedDescription;
@property(copy, nonatomic) NSString *localizedLabel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *persistentIdentifier;
@property(readonly) Class superclass;

@end

