//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMFUI/AAUISpecifierProvider-Protocol.h>

@class AAUIAccountManager, NSArray, NSString;
@protocol AAUISpecifierProviderDelegate;

@interface FMFSpecifierProvider : NSObject <AAUISpecifierProvider>
{
    id <AAUISpecifierProviderDelegate> _delegate;
    NSArray *_specifiers;
    AAUIAccountManager *_accountManager;
}

@property(retain, nonatomic) AAUIAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(copy, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;
@property(nonatomic) __weak id <AAUISpecifierProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isAccountInGrayMode;
- (_Bool)locationServicesDisabledByRestrictions;
- (_Bool)shouldShowLocationSharingSpecifier;
- (_Bool)shouldEnableLocationSharingSpecifier;
- (void)locationSharingSpecifierWasTapped:(id)arg1;
- (id)initWithAccountManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

