//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UISDeviceContext;

__attribute__((visibility("hidden")))
@interface _UIDeviceInitialDeviceConfigurationLoader : NSObject
{
    UISDeviceContext *_context;
    _Bool _hasRequestedPreload;
}

+ (id)sharedLoader;
- (void).cxx_destruct;
@property(readonly, nonatomic) UISDeviceContext *initialDeviceContext;
- (void)_startPreloadInitialDeviceContext;

@end

