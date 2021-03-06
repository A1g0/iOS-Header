//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Supervisor.h"

@class NSHashTable, NSMutableSet, NSRecursiveLock, PIDHashTable, PIDMapTable;

@interface AgentSupervisor : Supervisor
{
    NSHashTable *_agents;
    NSMutableSet *_activeAgents;
    NSRecursiveLock *_agentLock;
    PIDMapTable *_agentProgress;
    PIDMapTable *_agentRefs;
    PIDHashTable *_terminatedPIDs;
}

- (void).cxx_destruct;
- (void)_shutdownAgent:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)_registerAgent:(id)arg1;
- (id)_reanimateAgentsForReferences:(id)arg1;
- (id)_reanimateAgentForReference:(id)arg1;
- (void)_manageAgentsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_handleAcquiredAssertion:(id)arg1;
- (void)_endObservingAgent:(id)arg1;
- (_Bool)_disavowPID:(long long)arg1;
- (void)_currentStatesForReferences:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_currentStateForReference:(id)arg1;
- (_Bool)_agentIsTerminated:(id)arg1;
- (_Bool)_agentIsShutdown:(id)arg1;
- (id)_registerAndCoalesceAgents:(id)arg1;
- (id)_registerAndCoalesceAgent:(id)arg1;
- (id)_progressForAgent:(id)arg1;
- (void)_markAgentAsInactive:(id)arg1;
- (void)_markAgentAsActive:(id)arg1;
- (id)_createReferenceToPID:(long long)arg1;
- (id)_createReferenceToAgent:(id)arg1;
- (id)_allAgentReferences;
- (void)_didUnregisterAgentProgress:(id)arg1;
- (void)_didShutdownAgent:(id)arg1;
- (void)_didRegisterAgentProgress:(id)arg1;
- (void)_didRegisterAgent:(id)arg1;
- (void)_destroyAgentWithPID:(long long)arg1;
- (void)_currentStatesForPIDs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_currentStateForPID:(long long)arg1;
- (id)_createReferenceForAgent:(id)arg1;
- (id)_createReferenceForPID:(long long)arg1;
- (id)_createAgentsForPIDs:(id)arg1;
- (id)_createAgentForPID:(long long)arg1;
- (void)_applyTransitionContext:(id)arg1 toPID:(long long)arg2 handleResult:(CDUnknownBlockType)arg3;
- (void)terminateReference:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)terminateAgent:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)synchronizeCurrentStateForPIDs:(id)arg1;
- (void)synchronizeCurrentStateForPID:(long long)arg1;
- (_Bool)referenceIsTerminated:(id)arg1;
- (id)reanimateAgentForReference:(id)arg1;
- (void)manageAnimatedPIDs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateStatesForReferences:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAgentsForReferences:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)disavowReference:(id)arg1;
- (_Bool)disavowAgent:(id)arg1;
- (void)deliverMessage:(id)arg1;
- (id)currentStateForReference:(id)arg1;
- (void)abortTerminationForReference:(id)arg1;
- (id)init;

@end

