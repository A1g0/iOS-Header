//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CARSettingsTablePanel.h"

#import "CARSessionObserving-Protocol.h"
#import "CARSettingsVehicleDelegate-Protocol.h"

@class CARNowPlayingAlbumArtSpecifier, CARSession, CARSessionStatus, CARSettingsSwitchCellSpecifier, CRPairedVehicleManager, CRVehicle, NSArray, NSString;

@interface CARRootPanel : CARSettingsTablePanel <CARSessionObserving, CARSettingsVehicleDelegate>
{
    NSArray *_cellSpecifiers;
    CARSessionStatus *_sessionStatus;
    NSArray *_panels;
    CRPairedVehicleManager *_pairedManager;
    CARSession *_carSession;
    CRVehicle *_vehicle;
    CARSettingsSwitchCellSpecifier *_dndSpecifier;
    CARNowPlayingAlbumArtSpecifier *_albumArtSpecifier;
}

@property(retain, nonatomic) CARNowPlayingAlbumArtSpecifier *albumArtSpecifier; // @synthesize albumArtSpecifier=_albumArtSpecifier;
@property(retain, nonatomic) CARSettingsSwitchCellSpecifier *dndSpecifier; // @synthesize dndSpecifier=_dndSpecifier;
@property(retain, nonatomic) CRVehicle *vehicle; // @synthesize vehicle=_vehicle;
@property(retain, nonatomic) CARSession *carSession; // @synthesize carSession=_carSession;
@property(retain, nonatomic) CRPairedVehicleManager *pairedManager; // @synthesize pairedManager=_pairedManager;
@property(readonly, nonatomic) NSArray *panels; // @synthesize panels=_panels;
@property(retain, nonatomic) CARSessionStatus *sessionStatus; // @synthesize sessionStatus=_sessionStatus;
- (void).cxx_destruct;
- (void)saveVehicle:(id)arg1;
- (void)sessionDidConnect:(id)arg1;
- (id)title;
- (id)cellSpecifiers;
- (_Bool)showCellImages;
- (id)initWithPanelController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

