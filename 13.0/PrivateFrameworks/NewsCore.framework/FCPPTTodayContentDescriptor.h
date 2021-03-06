//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FCPPTTodayContentDescriptor : NSObject
{
    unsigned long long _contentType;
    NSString *_tagID;
    NSString *_forYouConfigID;
}

+ (id)descriptorWithForYouConfigID:(id)arg1;
+ (id)descriptorWithForYouConfigID:(id)arg1 tagID:(id)arg2;
+ (id)descriptorWithTagID:(id)arg1;
@property(readonly, nonatomic) NSString *forYouConfigID; // @synthesize forYouConfigID=_forYouConfigID;
@property(readonly, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;
@property(readonly, nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
- (void).cxx_destruct;
- (id)_initWithForYouConfigID:(id)arg1 tagID:(id)arg2;
- (id)_initWithTagID:(id)arg1;

@end

