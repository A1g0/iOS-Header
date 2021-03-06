//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSServiceMonitor, NSMutableSet;

@interface IDSServiceContainer : NSObject
{
    IDSServiceMonitor *_monitor;
    NSMutableSet *_listeners;
}

@property(readonly, nonatomic) NSMutableSet *listeners; // @synthesize listeners=_listeners;
@property(retain, nonatomic) IDSServiceMonitor *monitor; // @synthesize monitor=_monitor;
- (void).cxx_destruct;
- (_Bool)removeListenerID:(id)arg1;
- (_Bool)addListenerID:(id)arg1;
- (_Bool)hasListenerID:(id)arg1;
- (id)initWithService:(id)arg1;

@end

