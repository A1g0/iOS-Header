//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TTRIRecurrenceGridChooserController.h"

@class NSMutableSet;

@interface TTRIRecurrenceMonthDayChooserController : TTRIRecurrenceGridChooserController
{
    NSMutableSet *_daysOfTheMonthSet;
    _Bool _prohibitsMultipleDaysInMonthlyRecurrence;
}

@property(nonatomic) _Bool prohibitsMultipleDaysInMonthlyRecurrence; // @synthesize prohibitsMultipleDaysInMonthlyRecurrence=_prohibitsMultipleDaysInMonthlyRecurrence;
- (void).cxx_destruct;
- (void)selectCell:(id)arg1 atIndex:(long long)arg2;
- (void)refreshCells;
- (void)prepareForDisplay;
- (long long)gridViewType;
- (id)cellLabels;
- (void)updateFromRecurrenceRule:(id)arg1;
- (void)updateRecurrenceRuleBuilder:(id)arg1;
- (void)setDaysOfTheMonth:(id)arg1;
- (id)daysOfTheMonth;
- (long long)frequency;
- (id)initWithDate:(id)arg1;

@end

