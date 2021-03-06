//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLFeatureProvider-Protocol.h"

@class MLMultiArray, NSSet;

@interface HPdetector_SceneClassifierInput : NSObject <MLFeatureProvider>
{
    MLMultiArray *_imageDescriptors;
}

@property(retain, nonatomic) MLMultiArray *imageDescriptors; // @synthesize imageDescriptors=_imageDescriptors;
- (void).cxx_destruct;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithImageDescriptors:(id)arg1;

@end

