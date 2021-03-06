//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFAnalyticsEvent.h>

@class NSUUID;

@interface HFAnalyticsCameraClipPlayerDidStartPlayingEvent : HFAnalyticsEvent
{
    NSUUID *_clipID;
    NSUUID *_cameraID;
    NSUUID *_playbackSessionID;
}

@property(retain, nonatomic) NSUUID *playbackSessionID; // @synthesize playbackSessionID=_playbackSessionID;
@property(retain, nonatomic) NSUUID *cameraID; // @synthesize cameraID=_cameraID;
@property(retain, nonatomic) NSUUID *clipID; // @synthesize clipID=_clipID;
- (void).cxx_destruct;
- (id)payload;
- (id)initWithData:(id)arg1;

@end

