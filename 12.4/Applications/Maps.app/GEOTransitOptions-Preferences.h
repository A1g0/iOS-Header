//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOTransitOptions.h>

@interface GEOTransitOptions (Preferences)
+ (int)sortOptionFromDefaults;
- (void)_populateGeoAvoidedTransitModeForTransitMode:(long long)arg1;
- (void)populateAvoidedModeFromModes:(long long)arg1;
- (long long)_individualModeForGEOAvoidedMode:(int)arg1;
@property(readonly, nonatomic) long long mapsTransitModes;
@end

