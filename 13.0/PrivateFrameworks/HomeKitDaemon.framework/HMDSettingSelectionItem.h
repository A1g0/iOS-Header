//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface HMDSettingSelectionItem : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_identifier;
    NSString *_title;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy) NSString *title; // @synthesize title=_title;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1;

@end

