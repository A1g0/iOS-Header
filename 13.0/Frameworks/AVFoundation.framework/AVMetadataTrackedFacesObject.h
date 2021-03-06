//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVMetadataObject.h>

#import <AVFoundation/NSCopying-Protocol.h>

@class AVMetadataTrackedFacesObjectInternal, NSDictionary;

@interface AVMetadataTrackedFacesObject : AVMetadataObject <NSCopying>
{
    AVMetadataTrackedFacesObjectInternal *_trackedFacesObjectInternal;
}

+ (id)trackedFacesWithTime:(CDStruct_1b6d18a9)arg1 faceKitDictionary:(id)arg2 input:(id)arg3;
@property(readonly) NSDictionary *payload;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform)arg2 isVideoMirrored:(_Bool)arg3 rollAdjustment:(double)arg4;
- (id)initWithTime:(CDStruct_1b6d18a9)arg1 faceKitDictionary:(id)arg2 input:(id)arg3;

@end

