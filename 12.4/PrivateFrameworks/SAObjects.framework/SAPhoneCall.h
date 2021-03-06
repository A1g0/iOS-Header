//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSNumber, SAPersonAttribute;

@interface SAPhoneCall : SADomainCommand
{
}

+ (id)callWithDictionary:(id)arg1 context:(id)arg2;
+ (id)call;
- (_Bool)requiresResponse;
@property(nonatomic) _Bool speakerphoneCall;
@property(nonatomic) _Bool handsFreeCall;
@property(nonatomic) _Bool faceTimeAudio;
@property(nonatomic) _Bool faceTime;
@property(copy, nonatomic) NSNumber *emergencyCall;
@property(retain, nonatomic) SAPersonAttribute *callRecipient;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

