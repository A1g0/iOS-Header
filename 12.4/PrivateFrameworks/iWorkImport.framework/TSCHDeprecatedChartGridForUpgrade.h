//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class TSCHChartGrid;

__attribute__((visibility("hidden")))
@interface TSCHDeprecatedChartGridForUpgrade : TSPObject
{
    TSCHChartGrid *mGrid;
}

@property(readonly, retain, nonatomic) TSCHChartGrid *grid; // @synthesize grid=mGrid;
- (void)dealloc;
- (void)loadFromUnarchiver:(id)arg1;

@end

