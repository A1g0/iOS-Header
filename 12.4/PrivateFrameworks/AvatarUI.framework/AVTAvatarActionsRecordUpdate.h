//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AVTAvatarRecord;

@interface AVTAvatarActionsRecordUpdate : NSObject
{
    _Bool _fromLeft;
    id <AVTAvatarRecord> _avatarRecord;
}

@property(readonly, nonatomic) _Bool fromLeft; // @synthesize fromLeft=_fromLeft;
@property(readonly, nonatomic) id <AVTAvatarRecord> avatarRecord; // @synthesize avatarRecord=_avatarRecord;
- (void).cxx_destruct;
- (id)initWithAvatarRecord:(id)arg1 fromLeft:(_Bool)arg2;

@end

