//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIDepthDisparityConverter : CIFilter
{
    CIImage *inputImage;
}

+ (id)customAttributes;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;

@end

