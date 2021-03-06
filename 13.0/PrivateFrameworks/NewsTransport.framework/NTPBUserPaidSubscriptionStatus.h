//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBUserPaidSubscriptionStatus : PBCodable <NSCopying>
{
    NSString *_paidSubscriptionChannelId;
    int _paidSubscriptionStatus;
    struct {
        unsigned int paidSubscriptionStatus:1;
    } _has;
}

@property(retain, nonatomic) NSString *paidSubscriptionChannelId; // @synthesize paidSubscriptionChannelId=_paidSubscriptionChannelId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPaidSubscriptionChannelId;
- (int)StringAsPaidSubscriptionStatus:(id)arg1;
- (id)paidSubscriptionStatusAsString:(int)arg1;
@property(nonatomic) _Bool hasPaidSubscriptionStatus;
@property(nonatomic) int paidSubscriptionStatus; // @synthesize paidSubscriptionStatus=_paidSubscriptionStatus;

@end

