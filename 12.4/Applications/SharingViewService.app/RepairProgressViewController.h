//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UIImageView, UILabel, UIView;

@interface RepairProgressViewController : SVSBaseViewController <UIGestureRecognizerDelegate>
{
    UILabel *_titleLabel;
    UIImageView *_imageView;
    UIView *_progressView;
    UIActivityIndicatorView *_progressSpinner;
    UILabel *_progressLabel;
}

- (void).cxx_destruct;
- (void)handleProgressEvent:(unsigned int)arg1;
- (void)handleDismissButton:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

