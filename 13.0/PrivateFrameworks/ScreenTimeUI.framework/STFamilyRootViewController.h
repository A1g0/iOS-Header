//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STListViewController.h>

@class NSObject;
@protocol STRootViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STFamilyRootViewController : STListViewController
{
    NSObject<STRootViewModelCoordinator> *_coordinator;
}

@property(readonly, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
- (void).cxx_destruct;
- (id)init;

@end

