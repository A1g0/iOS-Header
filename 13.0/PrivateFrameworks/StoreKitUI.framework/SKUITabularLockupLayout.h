//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SKUITabularLockupLayout : NSObject
{
    NSArray *_columns;
}

+ (id)fontForLabelViewElement:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) NSArray *columns; // @synthesize columns=_columns;
- (void).cxx_destruct;
- (void)sizeColumnsToFitWidth:(double)arg1 context:(id)arg2;
- (id)initWithLockup:(id)arg1 context:(id)arg2;

@end

