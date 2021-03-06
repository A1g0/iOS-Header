//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ControlContaineeViewController.h"

#import "BrowseDataSourceDelegate-Protocol.h"
#import "GEOLogContextDelegate-Protocol.h"
#import "LocalSearchViewControllerDelegate-Protocol.h"
#import "PPTTestChromeScrollable-Protocol.h"
#import "SearchDataSourceDelegate-Protocol.h"
#import "SearchResultQuickActionMenuPresenterDelegate-Protocol.h"
#import "UIKeyboardInput-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "VenueChangeObserver-Protocol.h"
#import "VenuesControlCoordinating-Protocol.h"

@class BrowseDataSource, DataSource, GEORetainedSearchMetadata, GEOSearchCategory, HairlineView, LocalSearchViewController, MKViewWithHairline, MapsDragDestinationHandler, NSDate, NSDictionary, NSLayoutConstraint, NSString, PassthruSearchBar, PersonalizedItemManager, RecentsDataSource, ResultsViewController, SearchDataSource, SearchFieldItem, SearchResultQuickActionMenuPresenter, TokenView, UIImage, UITableView, UITextField, UIView;
@protocol UITableViewDelegate><UITableViewDataSource;

__attribute__((visibility("hidden")))
@interface SearchViewController : ControlContaineeViewController <UISearchBarDelegate, UITextFieldDelegate, UIKeyboardInput, SearchDataSourceDelegate, BrowseDataSourceDelegate, LocalSearchViewControllerDelegate, GEOLogContextDelegate, SearchResultQuickActionMenuPresenterDelegate, PPTTestChromeScrollable, VenueChangeObserver, VenuesControlCoordinating>
{
    PassthruSearchBar *_searchBar;
    UITextField *_searchField;
    NSString *_userTypedSearchString;
    UITableView *_contentTableView;
    RecentsDataSource *_recentsDataSource;
    SearchDataSource *_searchDataSource;
    BrowseDataSource *_browseDataSource;
    DataSource<UITableViewDelegate><UITableViewDataSource> *_currentDataSource;
    LocalSearchViewController *_localSearchViewController;
    SearchFieldItem *_searchItem;
    UIView *_defaultLeftView;
    UIView *_grabberView;
    UIView *_hideableFooterView;
    HairlineView *_bottomHeaderHairline;
    NSLayoutConstraint *_bottomHideableFooterConstraint;
    MKViewWithHairline *_grabberFooterView;
    TokenView *_tokenView;
    _Bool _showResultsView;
    _Bool _showRefreshFooter;
    _Bool _needsUpdateContentState;
    _Bool _needsSearchFieldLayout;
    _Bool _hasEdited;
    _Bool _wasEmptyAtFocus;
    _Bool _isConfigured;
    _Bool _noTypingSent;
    UIImage *_defaultImage;
    _Bool _maintainSearchStateWhenDisappearing;
    NSString *_retainedSearchQueryString;
    NSDate *_retainedSearchQueryTimestamp;
    GEORetainedSearchMetadata *_retainedSearchQueryMetadata;
    double _timeToRetainSearchQuery;
    GEORetainedSearchMetadata *_restoredRetainedSearchQueryMetadata;
    GEOSearchCategory *_lastPopularCategory;
    SearchResultQuickActionMenuPresenter *_quickActionMenuPresenter;
    MapsDragDestinationHandler *_mapsDragDestinationHandler;
    ResultsViewController *_resultsViewController;
    PersonalizedItemManager *_personalizedItemManager;
    UIView *_header;
}

@property(readonly, nonatomic) DataSource<UITableViewDelegate><UITableViewDataSource> *currentDataSource; // @synthesize currentDataSource=_currentDataSource;
@property(readonly, nonatomic) UIView *header; // @synthesize header=_header;
@property(nonatomic) __weak PersonalizedItemManager *personalizedItemManager; // @synthesize personalizedItemManager=_personalizedItemManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *searchResultCountInVenue;
- (id)pptTestScrollView;
- (id)scrollViewForProactive;
- (int)currentMapViewTargetForAnalytics;
- (_Bool)shouldQuickActionMenuPresenter:(id)arg1 showDirectionsToPlace:(id)arg2;
- (void)quickActionMenuPresenter:(id)arg1 selectedRemoveDroppedPinOf:(id)arg2;
- (id)mapServiceTraitsForQuickActionPresenter:(id)arg1;
- (int)uiTargetForQuickActionMenu;
- (_Bool)quickActionMenuPresenter:(id)arg1 isPopularNearbyAtIndexPath:(id)arg2;
- (_Bool)shouldQuickActionMenuPresenter:(id)arg1 presentAtLocation:(struct CGPoint)arg2 inView:(id)arg3;
- (void)quickActionMenuPresenter:(id)arg1 selectedViewTransitLinesOnMap:(id)arg2;
- (void)quickActionMenuPresenter:(id)arg1 selectedShowPlaceCard:(id)arg2;
- (void)quickActionMenuPresenter:(id)arg1 selectedShareLocationOf:(id)arg2;
- (void)quickActionMenuPresenter:(id)arg1 selectedViewWebsiteFor:(id)arg2;
- (void)quickActionMenuPresenter:(id)arg1 selectedCall:(id)arg2;
- (void)quickActionMenuPresenter:(id)arg1 selectedDirectionsTo:(id)arg2;
- (void)_addRecentPlaceForSearchResult:(id)arg1;
- (int)currentUITargetForAnalytics;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)selectNearByCategoryAtIndex:(unsigned long long)arg1;
- (void)textDroppableView:(id)arg1 dropSessionDidEnd:(id)arg2;
- (void)textDroppableView:(id)arg1 willPerformDrop:(id)arg2;
- (id)textDroppableView:(id)arg1 proposalForDrop:(id)arg2;
- (void)_textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;
- (void)dataSourceUpdated:(id)arg1;
- (int)listForDataSource:(id)arg1;
- (id)animationForBrowseDataSource:(id)arg1;
- (void)browseDataSourceNearbySelected:(id)arg1;
- (id)currentTraitsForBrowseDataSource:(id)arg1;
- (void)didChangeFocusedVenue:(id)arg1 focusedBuilding:(id)arg2 displayedFloorOrdinal:(short)arg3;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (id)localSearchViewController;
- (void)localSearchViewControllerDidSelectBrowseVenue:(id)arg1;
- (void)localSearchViewControllerDidSelectRefreshSearchHere:(id)arg1;
- (id)venueWithFocus;
- (void)localSearchViewShowInCardFooterWhenCardHasExpandedLayoutDidChange:(id)arg1;
- (void)updateConstraintsForHideableFooterForWasVisible:(_Bool)arg1 isVisible:(_Bool)arg2;
- (void)localSearchViewControllerSizeDidChange:(id)arg1;
- (void)localSearchViewShouldBeVisibleDidChange:(id)arg1;
- (void)addRefreshFooter:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateRefreshFooterAnimated:(_Bool)arg1;
- (void)updateRefreshFooter;
- (void)showGrabberFooter:(_Bool)arg1;
- (double)heightForContaineeLayoutMedium;
- (void)applyAlphaToContent:(double)arg1;
- (unsigned long long)defaultLayoutForStyle:(unsigned long long)arg1;
- (_Bool)useDefaultLayout;
- (_Bool)supportOverridenLayout;
- (_Bool)updateConstraintsForLayout:(unsigned long long)arg1;
- (void)willChangeContainerStyle:(unsigned long long)arg1;
- (void)didChangeLayout:(unsigned long long)arg1;
- (double)heightForLayout:(unsigned long long)arg1;
- (_Bool)updateHeightConstraintWithValue:(double)arg1;
- (void)willChangeLayout:(unsigned long long)arg1;
- (void)willBecomeCurrent:(_Bool)arg1;
- (long long)floatingControlsOptions;
- (void)setupResultsConstraints;
- (void)setupConstraints;
- (void)sendACRequest;
- (void)sendSearchRequestFromRefresh:(_Bool)arg1;
- (void)searchBarBecomeFirstResponder;
- (void)searchDidCancel;
- (void)showLoadingState;
- (void)endEditing;
- (void)cleanSearch;
- (void)cleanSearchAndRestoreCurrentSearchString;
- (void)restoreRetainedSearchQuery;
- (_Bool)hasRelevantRetainedSearchQuery;
- (double)retainedSearchQueryAge;
- (_Bool)hasRetainedSearchQuery;
- (void)clearRetainedSearchQuery;
- (void)retainSearchQuery:(id)arg1 metadata:(id)arg2 forTimeInterval:(double)arg3;
- (void)retainSearchQueryWithRetainedSearchMetadata:(id)arg1 forTimeInterval:(double)arg2;
- (void)retainSearchQueryForSelectedSearchResult:(id)arg1 forTimeInterval:(double)arg2;
- (void)retainSearchQueryForSelectedSearchResult:(id)arg1;
- (void)retainSearchQueryForSelectedSearchCompletion:(id)arg1 forTimeInterval:(double)arg2;
- (void)retainSearchQueryForSelectedSearchCompletion:(id)arg1;
- (void)retainSearchQueryForSelectedAutocompleteItem:(id)arg1 forTimeInterval:(double)arg2;
- (void)retainSearchQueryForSelectedAutocompleteItem:(id)arg1;
- (void)retainSearchQuery;
- (id)defaultSearchQueryToRetain;
- (void)willShowSingleSearchResult:(id)arg1;
- (void)refreshCurrentSearch;
- (void)updateSearchFieldWithItem:(id)arg1;
- (void)updateDataSource;
- (void)updateContentState;
- (void)updateSearchSession;
- (void)setSearchFieldNeedsLayout;
- (void)_updateSearchFieldView;
- (_Bool)_hasToken;
- (id)suggestionsItemSource;
- (_Bool)hasSearchResults;
- (_Bool)hasCategory;
- (id)currentCategory;
- (id)currentSearchSession;
- (void)setCurrentDataSource:(id)arg1;
- (void)setShowResultsView:(_Bool)arg1;
- (void)showToken:(_Bool)arg1;
- (double)headerHeight;
- (void)preferredContentSizeChanged:(id)arg1;
- (void)viewLayoutMarginsDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_initPlaceholderWithSubmitTicketIfNeeded:(_Bool)arg1;
- (void)_setPlaceHolder;
- (void)setNeedsUpdateContentState;
@property(readonly, nonatomic) ResultsViewController *resultsViewController; // @synthesize resultsViewController=_resultsViewController;
- (void)updateTheme;
- (void)enableTextNotification:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

