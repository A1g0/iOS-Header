//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSSScreenshot;

@interface SSSPendingScreenshotRecord : NSObject
{
    SSSScreenshot *_screenshot;
    CDUnknownBlockType _deliveryCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType deliveryCompletionBlock; // @synthesize deliveryCompletionBlock=_deliveryCompletionBlock;
@property(retain, nonatomic) SSSScreenshot *screenshot; // @synthesize screenshot=_screenshot;
- (void).cxx_destruct;
- (id)initWithScreenshot:(id)arg1 deliveryCompletionBlock:(CDUnknownBlockType)arg2;

@end

