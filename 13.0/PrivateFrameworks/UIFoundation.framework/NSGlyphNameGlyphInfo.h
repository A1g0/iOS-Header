//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/NSIdentityGlyphInfo.h>

#import <UIFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSGlyphNameGlyphInfo : NSIdentityGlyphInfo <NSSecureCoding>
{
    NSString *_name;
}

+ (_Bool)supportsSecureCoding;
+ (void)initialize;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)glyphName;
- (void)dealloc;
- (id)initWithGlyphName:(id)arg1 glyph:(unsigned int)arg2 forFont:(id)arg3 baseString:(id)arg4;

@end

