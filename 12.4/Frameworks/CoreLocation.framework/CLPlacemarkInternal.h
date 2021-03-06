//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, CLRegion, GEOMapItemStorage, NSArray, NSDictionary, NSTimeZone;

@interface CLPlacemarkInternal : NSObject
{
    CLLocation *location;
    NSDictionary *addressDictionary;
    CLRegion *region;
    NSArray *areasOfInterest;
    GEOMapItemStorage *geoMapItemStorage;
    NSTimeZone *timeZone;
}

- (id)init;

@end

