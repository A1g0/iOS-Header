//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProviderDaemon/FPDActionOperation.h>

@class FPDCoordinator, FPDownloadInfo, NSObject;
@protocol OS_dispatch_queue;

@interface FPDDownloadOperation : FPDActionOperation
{
    NSObject<OS_dispatch_queue> *_queue;
    FPDCoordinator *_coordinator;
}

+ (_Bool)_validateInfo:(id)arg1;
- (void).cxx_destruct;
- (void)main;
- (void)_finishedDownloadingLocator:(id)arg1 withError:(id)arg2;
- (void)_setupCreatedItemForRoot:(id)arg1;
- (void)sendPastUpdatesToClient:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithActionInfo:(id)arg1 request:(id)arg2 server:(id)arg3;
- (id)downloadInfo;

// Remaining properties
@property(readonly, nonatomic) FPDownloadInfo *info; // @dynamic info;

@end

