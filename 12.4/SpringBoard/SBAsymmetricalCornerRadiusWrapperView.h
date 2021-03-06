//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class BSCornerRadiusConfiguration;

@interface SBAsymmetricalCornerRadiusWrapperView : UIView
{
    BSCornerRadiusConfiguration *_cornerRadiusConfiguration;
    unsigned long long _maskedCorners;
    UIView *_trailingCornersMaskingView;
}

@property(retain, nonatomic) UIView *trailingCornersMaskingView; // @synthesize trailingCornersMaskingView=_trailingCornersMaskingView;
@property(nonatomic) unsigned long long maskedCorners; // @synthesize maskedCorners=_maskedCorners;
@property(retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration; // @synthesize cornerRadiusConfiguration=_cornerRadiusConfiguration;
- (void).cxx_destruct;
- (void)_updateMaskedCorners;
- (void)_updateCornerRadius;
- (void)addContentView:(id)arg1;
- (void)setClipsToBounds:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

