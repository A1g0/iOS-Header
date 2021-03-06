//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WebTextIteratorPrivate;

@interface WebTextIterator : NSObject
{
    WebTextIteratorPrivate *_private;
}

- (unsigned long long)currentTextLength;
- (const unsigned short *)currentTextPointer;
- (id)currentRange;
- (_Bool)atEnd;
- (void)advance;
- (id)initWithRange:(id)arg1;
- (void)dealloc;
- (id)currentText;
- (id)currentNode;

@end

