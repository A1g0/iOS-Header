//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSDictionary, NSString, UIImageView, UILabel;

@interface AirPodsMismatchViewController : SVSBaseViewController <UIGestureRecognizerDelegate>
{
    UILabel *_leftMajorLabel;
    UILabel *_leftMinorLabel;
    UIImageView *_leftPointerImageView;
    UILabel *_rightMajorLabel;
    UILabel *_rightMinorLabel;
    UIImageView *_rightPointerImageView;
    UIImageView *_productImageView;
    NSDictionary *_userInfo;
}

@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)handleTapOutsideView:(id)arg1;
- (void)handleDismissButton:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

