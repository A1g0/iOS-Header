//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSMutableArray, UIButton, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface PUPhotoEditLivePhotoToolbar : UIView
{
    _UIBackdropView *_backdropBackgroundView;
    UIView *_solidBackgroundView;
    UIView *_leadingButtonContainer;
    UIView *_trailingButtonContainer;
    NSLayoutConstraint *_viewHeightConstraint;
    NSLayoutConstraint *_leadingWidthConstraint;
    NSLayoutConstraint *_trailingWidthConstraint;
    NSMutableArray *_constraints;
    _Bool _useTranslucentBackground;
    long long _layoutType;
    UIButton *_leadingButton;
    UIButton *_trailingButton;
    UIView *_primaryView;
    double _primaryViewWidth;
    double _horizontalControlPadding;
    double _horizontalPrimaryViewPaddingOffset;
    double _verticalButtonOffset;
}

@property(nonatomic) _Bool useTranslucentBackground; // @synthesize useTranslucentBackground=_useTranslucentBackground;
@property(nonatomic) double verticalButtonOffset; // @synthesize verticalButtonOffset=_verticalButtonOffset;
@property(nonatomic) double horizontalPrimaryViewPaddingOffset; // @synthesize horizontalPrimaryViewPaddingOffset=_horizontalPrimaryViewPaddingOffset;
@property(nonatomic) double horizontalControlPadding; // @synthesize horizontalControlPadding=_horizontalControlPadding;
@property(nonatomic) double primaryViewWidth; // @synthesize primaryViewWidth=_primaryViewWidth;
@property(retain, nonatomic) UIView *primaryView; // @synthesize primaryView=_primaryView;
@property(retain, nonatomic) UIButton *trailingButton; // @synthesize trailingButton=_trailingButton;
@property(retain, nonatomic) UIButton *leadingButton; // @synthesize leadingButton=_leadingButton;
@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
- (void).cxx_destruct;
- (void)_updateBackgroundAnimated:(_Bool)arg1;
@property(readonly, nonatomic) double minimumControlWidth;
- (void)setUseTranslucentBackground:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_invalidateConstraints;
- (void)updateConstraints;
- (id)initWithLayout:(long long)arg1;

@end

