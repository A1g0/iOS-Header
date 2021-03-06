//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseViewController.h"

@class NSError, UIButton, UIImageView, UILabel;

@interface AppleTVSetupDoneViewController : SVSBaseViewController
{
    UIButton *_doneButton;
    UIImageView *_imageView;
    UILabel *_infoLabel;
    UIButton *_reportBugButton;
    UILabel *_titleLabel;
    NSError *_error;
}

@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)handleReportBugButton:(id)arg1;
- (void)handleDismissButton:(id)arg1;
- (void)handleActionButton:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

