//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LAContext, NSArray, NSDictionary, NSNumber, NSString, TKClientToken;

@interface TKClientTokenSession : NSObject
{
    long long _connectionIdentifier;
    NSArray *_advertisedItems;
    _Bool _authenticateWhenNeeded;
    _Bool __testing_AuthenticateInternally;
    LAContext *_LAContext;
    NSDictionary *_parameters;
    TKClientToken *_token;
    NSString *_slotName;
    NSNumber *_sessionID;
}

@property(readonly, nonatomic) NSNumber *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) _Bool _testing_AuthenticateInternally; // @synthesize _testing_AuthenticateInternally=__testing_AuthenticateInternally;
@property(readonly, nonatomic) NSString *slotName; // @synthesize slotName=_slotName;
@property(nonatomic) _Bool authenticateWhenNeeded; // @synthesize authenticateWhenNeeded=_authenticateWhenNeeded;
@property(readonly, nonatomic) TKClientToken *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) LAContext *LAContext; // @synthesize LAContext=_LAContext;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *identities;
@property(readonly, nonatomic) NSArray *certificates;
@property(readonly, nonatomic) NSArray *keys;
- (id)itemsOfClass:(id)arg1;
- (id)advertisedItems;
- (void)dealloc;
- (_Bool)deleteObject:(id)arg1 error:(id *)arg2;
- (id)createObjectWithAttributes:(id)arg1 error:(id *)arg2;
- (id)objectForObjectID:(id)arg1 error:(id *)arg2;
- (_Bool)evaluateAccessControl:(id)arg1 forOperation:(id)arg2 error:(id *)arg3;
- (id)initWithTokenID:(id)arg1 LAContext:(id)arg2 error:(id *)arg3;
- (id)initWithToken:(id)arg1 LAContext:(id)arg2 parameters:(id)arg3 error:(id *)arg4;
- (id)withError:(id *)arg1 accessControl:(struct __SecAccessControl *)arg2 invoke:(CDUnknownBlockType)arg3;
- (_Bool)ensureSessionWithClient:(id)arg1 connectionIdentifier:(long long)arg2 error:(id *)arg3;
- (void)terminate;

@end

