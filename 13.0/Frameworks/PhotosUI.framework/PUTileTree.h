//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSCopying-Protocol.h>

@class NSMutableDictionary;

@interface PUTileTree : NSObject <NSCopying>
{
    _Bool _useUniqueLeafs;
    NSMutableDictionary *__objectsByTileIdentifier;
}

@property(readonly, nonatomic) NSMutableDictionary *_objectsByTileIdentifier; // @synthesize _objectsByTileIdentifier=__objectsByTileIdentifier;
@property(readonly, nonatomic) _Bool useUniqueLeafs; // @synthesize useUniqueLeafs=_useUniqueLeafs;
- (void).cxx_destruct;
- (id)description;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsWithTileIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)objectWithTileIdentifier:(id)arg1;
- (_Bool)containsObject:(id)arg1 withTileIdentifier:(id)arg2;
- (void)removeAllObjects;
- (void)removeObjectWithTileIdentifier:(id)arg1;
- (void)removeObject:(id)arg1 withTileIdentifier:(id)arg2;
- (void)addObject:(id)arg1 withTileIdentifier:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTileTree:(id)arg1;
- (id)initUsingUniqueLeafs:(_Bool)arg1;
- (id)init;

@end

