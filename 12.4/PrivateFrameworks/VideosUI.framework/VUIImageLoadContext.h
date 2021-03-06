//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperation;
@protocol VUIImageLoadingOperation;

__attribute__((visibility("hidden")))
@interface VUIImageLoadContext : NSObject
{
    NSOperation<VUIImageLoadingOperation> *_imageLoadOperation;
    unsigned long long _requestCount;
}

@property(nonatomic) unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property(retain, nonatomic) NSOperation<VUIImageLoadingOperation> *imageLoadOperation; // @synthesize imageLoadOperation=_imageLoadOperation;
- (void).cxx_destruct;

@end

