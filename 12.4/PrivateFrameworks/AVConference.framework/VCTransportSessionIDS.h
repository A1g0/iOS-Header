//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCTransportSession.h>

#import <AVConference/VCConnectionManagerDelegate-Protocol.h>
#import <AVConference/VCIDSSessionInfoSynchronizerDelegate-Protocol.h>

@class NSString, VCDatagramChannelIDS, VCIDSSessionInfoSynchronizer;

__attribute__((visibility("hidden")))
@interface VCTransportSessionIDS : VCTransportSession <VCConnectionManagerDelegate, VCIDSSessionInfoSynchronizerDelegate>
{
    int _socket;
    NSString *_destination;
    VCDatagramChannelIDS *_datagramChannel;
    _Bool _requireEncryptionInfo;
    VCIDSSessionInfoSynchronizer *_sessionInfoSynchronizer;
    _Bool _isIDSDCEventUsageErrorReported;
}

@property(readonly, nonatomic) VCIDSSessionInfoSynchronizer *sessionInfoSynchronizer; // @synthesize sessionInfoSynchronizer=_sessionInfoSynchronizer;
@property(nonatomic) int socket; // @synthesize socket=_socket;
@property(copy, nonatomic) NSString *destination; // @synthesize destination=_destination;
- (void)VCIDSSessionInfoSynchronizer:(void *)arg1 sendVCIDSSessionInfoRequest:(id)arg2;
- (void)optOutAllStreamsForConnection:(id)arg1;
- (void)resetParticipantGenerationCounter;
- (void)updateParticipantGenerationCounter:(unsigned char)arg1;
- (void)didEnableDuplication:(_Bool)arg1 activeConnection:(id)arg2;
- (void)discardConnection:(id)arg1;
- (void)connectionCallback:(id)arg1 isInitialConnection:(_Bool)arg2;
- (void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2;
- (void)handleChannelInfoReport:(id)arg1;
- (void)setQuickRelayServerProvider:(int)arg1;
- (void)setConnectionSetupTime;
- (void)handleUpdateRemoteSessionInfo:(id)arg1;
- (void)handleIDSMembershipChangeInfoEvent:(id)arg1;
- (void)handleIDSEncryptionInfoEvent:(id)arg1;
- (void)handleCellularMTUChanged:(id)arg1;
- (void)handleRATChanged:(id)arg1;
- (void)handlePreConnectionDataReceived:(id)arg1;
- (void)handleDefaultLinkUpdatedWithInfo:(id)arg1;
- (void)handleLinkDisconnectedWithInfo:(id)arg1;
- (void)handleLinkConnectedWithInfo:(id)arg1;
- (void)setDefaultLink:(id)arg1;
- (id)connectionSetupPiggybackBlob;
- (void)setPiggybackBlobPreference;
- (void)setConnectionSetupPiggybackBlob:(id)arg1;
- (void)stop;
- (void)start;
- (void)dispatchedProcessDatagramChannelEventInfo:(id)arg1;
- (void)processDatagramChannelEventInfo:(id)arg1;
- (_Bool)getConnectionSetupData:(id *)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithCallID:(unsigned int)arg1 requireEncryptionInfo:(_Bool)arg2 reportingAgent:(id)arg3 notificationQueue:(id)arg4 isMultiwaySession:(_Bool)arg5;
- (id)initWithCallID:(unsigned int)arg1 reportingAgent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

