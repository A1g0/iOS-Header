//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@interface MCCertificateTransparencyPayloadHandler : MCNewPayloadHandler
{
}

- (id)exceptionsDictionary;
- (_Bool)setExceptions:(id)arg1 outError:(id *)arg2;
- (id)applicationID;
- (void)_remove;
- (_Bool)_installOutError:(id *)arg1;
- (void)unsetAside;
- (void)setAside;
- (void)remove;
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;

@end

