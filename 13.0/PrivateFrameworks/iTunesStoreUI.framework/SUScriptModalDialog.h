//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ISDialog;
@protocol SUScriptModalDialogDelegate;

@interface SUScriptModalDialog : NSObject
{
    ISDialog *_dialog;
    id <SUScriptModalDialogDelegate> _delegate;
}

+ (id)titleForURL:(id)arg1;
@property(nonatomic) id <SUScriptModalDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_copyResponseByRunningModal;
- (id)copyResponseByRunningModal;
- (void)dealloc;
- (id)initWithDialog:(id)arg1;

@end

