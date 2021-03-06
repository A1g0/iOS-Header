//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDKeyValueEntity.h>

@interface HDProtectedKeyValueEntity : HDKeyValueEntity
{
}

+ (long long)_deviceLocalCategory;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)_keyForDataType:(id)arg1 error:(id *)arg2;
+ (id)keyForUserCharacteristicType:(id)arg1;
+ (_Bool)setUserCharacteristic:(id)arg1 forType:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)modificationDateForCharacteristicWithType:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)userCharacteristicForType:(id)arg1 profile:(id)arg2 entity:(id *)arg3 error:(id *)arg4;

@end

