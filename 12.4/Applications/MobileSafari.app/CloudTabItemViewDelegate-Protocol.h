//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CloudTabItemView;

@protocol CloudTabItemViewDelegate <NSObject>
- (void)cloudTabItemViewHighlightStateDidChange:(CloudTabItemView *)arg1;
- (void)cloudTabItemViewDeleteButtonWasTapped:(CloudTabItemView *)arg1;
- (void)cloudTabItemViewDidFinishEditing:(CloudTabItemView *)arg1;
- (void)cloudTabItemViewDidStartEditing:(CloudTabItemView *)arg1;
@end

