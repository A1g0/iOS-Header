//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TPPageController;

@protocol TPPageControllerLayoutObserver <NSObject>

@optional
- (void)pageController:(TPPageController *)arg1 didInvalidateFromPageIndex:(unsigned long long)arg2 sectionIndex:(unsigned long long)arg3;
- (void)pageController:(TPPageController *)arg1 didLayOutPageAtIndex:(unsigned long long)arg2 sectionIndex:(unsigned long long)arg3 syncing:(_Bool)arg4;
- (void)pageController:(TPPageController *)arg1 willLayOutPageAtIndex:(unsigned long long)arg2 sectionIndex:(unsigned long long)arg3 syncing:(_Bool)arg4;
@end

