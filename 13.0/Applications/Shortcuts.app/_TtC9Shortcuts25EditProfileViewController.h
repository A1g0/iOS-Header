//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class MISSING_TYPE;

@interface _TtC9Shortcuts25EditProfileViewController : UITableViewController
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *nameRequired;
    MISSING_TYPE *user;
    MISSING_TYPE *prompt;
    MISSING_TYPE *editingUser;
    MISSING_TYPE *$__lazy_storage_$_profilePhotoController;
    MISSING_TYPE *$__lazy_storage_$_headerView;
    MISSING_TYPE *$__lazy_storage_$_nameCell;
    MISSING_TYPE *$__lazy_storage_$_websiteCell;
    MISSING_TYPE *$__lazy_storage_$_twitterCell;
    MISSING_TYPE *$__lazy_storage_$_emailCell;
    MISSING_TYPE *$__lazy_storage_$_loadingItem;
    MISSING_TYPE *$__lazy_storage_$_saveItem;
    MISSING_TYPE *$__lazy_storage_$_identityCells;
    MISSING_TYPE *newlySelectedProfilePhoto;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)didTapProfilePhoto;
- (void)didTapSave;
- (void)didTapCancel;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithCoder:(id)arg1;

@end

