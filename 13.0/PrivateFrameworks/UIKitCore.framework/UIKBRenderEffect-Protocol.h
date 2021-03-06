//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSObject-Protocol.h>

@class UIKBGradient;

@protocol UIKBRenderEffect <NSObject, NSCopying>
@property(readonly, nonatomic) UIKBGradient *gradient;
@property(readonly, nonatomic) _Bool usesRGBColors;
@property(nonatomic) double weight;
@property(readonly, nonatomic) SEL renderSelector;
@property(readonly, nonatomic) _Bool renderUnder;
@property(readonly, nonatomic) _Bool isValid;
- (struct CGColor *)CGColor;
@end

