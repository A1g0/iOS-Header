//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDAssistantColorCharacteristic : HMFObject
{
    _Bool _mandatory;
    NSString *_readCharacteristicType;
    NSString *_writeCharacteristicType;
    NSString *_format;
}

@property(readonly, nonatomic) _Bool mandatory; // @synthesize mandatory=_mandatory;
@property(readonly, nonatomic) NSString *format; // @synthesize format=_format;
@property(readonly, nonatomic) NSString *writeCharacteristicType; // @synthesize writeCharacteristicType=_writeCharacteristicType;
@property(readonly, nonatomic) NSString *readCharacteristicType; // @synthesize readCharacteristicType=_readCharacteristicType;
- (void).cxx_destruct;
- (id)initWithReadCharacteristicType:(id)arg1 writeCharacteristicType:(id)arg2 format:(id)arg3 mandatory:(_Bool)arg4;

@end

