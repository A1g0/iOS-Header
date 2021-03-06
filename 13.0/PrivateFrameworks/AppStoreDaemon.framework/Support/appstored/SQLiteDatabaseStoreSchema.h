//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SQLiteConnection;

@interface SQLiteDatabaseStoreSchema : NSObject
{
    SQLiteConnection *_connection;
    NSString *_schemaName;
}

- (void).cxx_destruct;
- (_Bool)tableExists:(id)arg1;
- (_Bool)migrateToVersion:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)column:(id)arg1 existsInTable:(id)arg2;
@property(readonly) long long currentSchemaVersion;
- (id)initWithConnection:(id)arg1 schemaName:(id)arg2;

@end

