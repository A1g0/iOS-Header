//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CLKDevice;

@interface NTKSolarDiskView : UIView
{
    double _horizonLine;
    CLKDevice *_device;
    UIView *_sunUpView;
    UIView *_sunDownView;
}

@property(retain, nonatomic) UIView *sunDownView; // @synthesize sunDownView=_sunDownView;
@property(retain, nonatomic) UIView *sunUpView; // @synthesize sunUpView=_sunUpView;
@property(retain, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(nonatomic) double horizonLine; // @synthesize horizonLine=_horizonLine;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setCenter:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;

@end

