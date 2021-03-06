//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ARPresentationThermalPolicy : NSObject
{
    NSMutableDictionary *_cameraConfigurations;
}

@property(readonly) NSMutableDictionary *cameraConfigurations; // @synthesize cameraConfigurations=_cameraConfigurations;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateCameraConfig:(id)arg1;
- (void)addCameraConfig:(id)arg1;
- (id)cameraConfigForDeviceType:(id)arg1 position:(long long)arg2;
- (id)_keyForType:(id)arg1 position:(long long)arg2;
- (id)description;
- (id)init;

@end

