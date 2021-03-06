//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"
#import "NanoWeatherAppWorkSpaceObserverDelegate-Protocol.h"
#import "PSYSyncCoordinatorDelegate-Protocol.h"
#import "SynchronizedDefaultsDelegate-Protocol.h"

@class NSArray, NSLock, NSOperationQueue, NSString, NanoWeatherPreferences, PSYSyncCoordinator, WeatherPreferences;
@protocol OS_dispatch_source;

@interface NanoWeatherPreferencesMonitor : NSObject <PSYSyncCoordinatorDelegate, NanoWeatherAppWorkSpaceObserverDelegate, CLLocationManagerDelegate, SynchronizedDefaultsDelegate>
{
    _Bool _monitoringStarted;
    _Bool _fullUpdateDone;
    _Bool _ubiquitousDefaultsSynced;
    _Bool _isUpdatingTimeZone;
    _Bool _syncCoordinatorWaitingForCompletion;
    _Bool _monitoringDeferred;
    int _authorizationStatus;
    long long _xpcXactionCount;
    NanoWeatherPreferences *_nanoWeatherPrefs;
    WeatherPreferences *_companionWeatherPrefs;
    unsigned long long _delayPrefsSyncRequestCount;
    NSArray *_companionCityList;
    NSString *_deviceLangID;
    NSOperationQueue *_utilityQueue;
    NSLock *_xactionRefCountLock;
    NSObject<OS_dispatch_source> *_timeZoneUpdateTimer;
    PSYSyncCoordinator *_syncCoordinator;
}

@property(retain, nonatomic) PSYSyncCoordinator *syncCoordinator; // @synthesize syncCoordinator=_syncCoordinator;
@property(nonatomic) _Bool monitoringDeferred; // @synthesize monitoringDeferred=_monitoringDeferred;
@property(nonatomic) _Bool syncCoordinatorWaitingForCompletion; // @synthesize syncCoordinatorWaitingForCompletion=_syncCoordinatorWaitingForCompletion;
@property(nonatomic) _Bool isUpdatingTimeZone; // @synthesize isUpdatingTimeZone=_isUpdatingTimeZone;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeZoneUpdateTimer; // @synthesize timeZoneUpdateTimer=_timeZoneUpdateTimer;
@property(retain, nonatomic) NSLock *xactionRefCountLock; // @synthesize xactionRefCountLock=_xactionRefCountLock;
@property(retain, nonatomic) NSOperationQueue *utilityQueue; // @synthesize utilityQueue=_utilityQueue;
@property(retain, nonatomic) NSString *deviceLangID; // @synthesize deviceLangID=_deviceLangID;
@property(retain, nonatomic) NSArray *companionCityList; // @synthesize companionCityList=_companionCityList;
@property(nonatomic) unsigned long long delayPrefsSyncRequestCount; // @synthesize delayPrefsSyncRequestCount=_delayPrefsSyncRequestCount;
@property(retain, nonatomic) WeatherPreferences *companionWeatherPrefs; // @synthesize companionWeatherPrefs=_companionWeatherPrefs;
@property(retain, nonatomic) NanoWeatherPreferences *nanoWeatherPrefs; // @synthesize nanoWeatherPrefs=_nanoWeatherPrefs;
@property(nonatomic) int authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property(nonatomic) long long xpcXactionCount; // @synthesize xpcXactionCount=_xpcXactionCount;
@property(nonatomic) _Bool ubiquitousDefaultsSynced; // @synthesize ubiquitousDefaultsSynced=_ubiquitousDefaultsSynced;
@property(nonatomic) _Bool fullUpdateDone; // @synthesize fullUpdateDone=_fullUpdateDone;
@property(nonatomic) _Bool monitoringStarted; // @synthesize monitoringStarted=_monitoringStarted;
- (void).cxx_destruct;
- (void)_loadCompanionCityList;
- (void)_doFullUpdateOfNanoPrefs;
- (void)_checkForInitialState;
- (void)_handleTimezoneUpdateError;
- (void)_updateCitiesTimeZones;
- (id)_timeZoneUpdateDateForCompanionCity:(id)arg1;
- (void)_cancelTimeZoneTimer;
- (void)_setTimeZoneTimerWithInterval:(double)arg1;
- (void)_setTimeZoneExpiryDate:(id)arg1;
- (void)_ensureValidCitiesProperties;
- (_Bool)_nanoCityNeedsUpdateDueToLocationInfoFrom:(id)arg1 differentFrom:(id)arg2;
- (_Bool)_nanoCityNeedsUpdateDueToLocationInfoFrom:(id)arg1;
- (id)_getNanoCityFromList:(id)arg1 forMatchingCompanionCity:(id)arg2;
- (_Bool)_nanoCityListNeedsUpdatingFrom:(id)arg1;
- (void)_updatePropertiesForCity:(id)arg1;
- (void)_updateCityList;
- (void)_endDelayingNanoPreferencesSync;
- (void)_beginDelayingNanoPreferencesSync;
- (void)_reachabilityChanged:(id)arg1;
- (void)_notifyToRestartMonitoring;
- (void)_cleanupSharedManagers;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)_endXPCTransactionIfOK;
- (void)_beginXPCTransaction;
- (void)ubiquitousDefaultsDidChange:(id)arg1;
- (void)weatherPrefsDidGetUpdated:(id)arg1;
- (void)weatherLocaleDidGetUpdated;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (void)weatherAppInstallationStateDidChange:(unsigned long long)arg1;
- (void)performBlockOnOperationQueue:(CDUnknownBlockType)arg1;
- (void)performBlockAsXPCXaction:(CDUnknownBlockType)arg1;
- (void)_forceTimezoneRefresh;
- (void)_addOperationWithQOS:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_defaultCities;
- (void)_stopMonitoring;
- (id)_deviceLangID;
- (void)_completeMonitoringStartup;
- (void)_startMonitoring;
- (void)dealloc;
- (void)run;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

