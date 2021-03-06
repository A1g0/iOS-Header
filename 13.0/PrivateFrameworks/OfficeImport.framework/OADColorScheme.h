//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OADColorScheme : NSObject <NSCopying>
{
    NSString *mName;
    NSMutableDictionary *mColors;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=mName;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)validateColorScheme;
- (_Bool)isEmpty;
- (void)setColor:(id)arg1 index:(int)arg2;
- (void)addColor:(id)arg1 index:(int)arg2;
- (id)colorForIndex:(int)arg1;
- (unsigned long long)colorCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

