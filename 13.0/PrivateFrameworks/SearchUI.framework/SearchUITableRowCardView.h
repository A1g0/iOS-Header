//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

@class TLKGridRowView;

@interface SearchUITableRowCardView : SearchUICardSectionView
{
}

+ (_Bool)isAHeader:(id)arg1;
+ (struct UIEdgeInsets)defaultLayoutMargins;
+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
+ (_Bool)hasOnlyImages:(id)arg1;
+ (double)largestImageSizeForSection:(id)arg1;
- (struct UIEdgeInsets)verticalBaselineInsetsForHeader:(_Bool)arg1 isCompactTable:(_Bool)arg2;
- (struct UIEdgeInsets)verticalBaselineInsetsForRowsWithCompactTable:(_Bool)arg1;
- (void)updateWithRowModel:(id)arg1;
- (id)setupContentView;

// Remaining properties
@property(retain, nonatomic) TLKGridRowView *contentView; // @dynamic contentView;

@end

