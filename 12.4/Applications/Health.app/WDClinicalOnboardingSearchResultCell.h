//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WDMedicalRecordBrandCell.h"

@class HKClinicalProviderSearchResult, NSArray;

@interface WDClinicalOnboardingSearchResultCell : WDMedicalRecordBrandCell
{
    HKClinicalProviderSearchResult *_searchResult;
    NSArray *_searchTerms;
}

@property(copy, nonatomic) NSArray *searchTerms; // @synthesize searchTerms=_searchTerms;
@property(copy, nonatomic) HKClinicalProviderSearchResult *searchResult; // @synthesize searchResult=_searchResult;
- (void).cxx_destruct;
- (id)_locationStringForSearchResult:(id)arg1;
- (void)_updateForContentSizeCategory:(id)arg1;
- (void)_updateContentWithSearchResult:(id)arg1 dataProvider:(id)arg2 searchTerms:(id)arg3;
- (void)_updateLabelVisibility;
- (void)setSearchResult:(id)arg1 dataProvider:(id)arg2 searchTerms:(id)arg3;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

