//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCAssetHandle, FCOperation;

@protocol FCAssetHandleDelegate <NSObject>
- (FCOperation *)operationToFetchDataProviderForAssetHandle:(FCAssetHandle *)arg1 completion:(void (^)(id <FCAssetDataProvider>, NSError *))arg2;
@end

