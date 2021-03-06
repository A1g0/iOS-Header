//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXTilingDebugDelegate-Protocol.h>

@class NSString, PXTilingControllerDebugInfo;

@interface PXTilingDebugUIView : UIView <PXTilingDebugDelegate>
{
    double _debugWidth;
    PXTilingControllerDebugInfo *__debugInfo;
}

@property(retain, nonatomic, setter=_setDebugInfo:) PXTilingControllerDebugInfo *_debugInfo; // @synthesize _debugInfo=__debugInfo;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)tilingControllerDidUpdateDebugInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

