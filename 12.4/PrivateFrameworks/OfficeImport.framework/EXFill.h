//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXFill : NSObject
{
}

+ (id)edFillFromXmlFillElement:(struct _xmlNode *)arg1 differentialFill:(_Bool)arg2 state:(id)arg3;
+ (id)edFillFromXmlFillElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)initialize;
+ (id)edStopFromXmlGradientElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (int)edGradientTypeFromXmlGradientTypeString:(id)arg1 state:(id)arg2;
+ (id)edGradientFillFromXmlElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (int)edPatternTypeFromXmlPatternTypeString:(id)arg1;
+ (id)edPatternFillFromXmlElement:(struct _xmlNode *)arg1 differentialFill:(_Bool)arg2 state:(id)arg3;

@end

