#ifndef __EXPORTS_H__
#define __EXPORTS_H__
//initialization functions basic
EXPORT(spursFinalize, 0xca4c4600);
EXPORT(spursAttributeSetNamePrefix, 0x7529113);
EXPORT(spursAttributeInitializeEx, 0x95180230);
EXPORT(spursInitializeWithAttribute, 0xaa6269a8);
EXPORT(spursInitializeWithAttribute2, 0x30aa96c4);
EXPORT(spursInitialize, 0xacfc8dbc);
EXPORT(spursAttributeSetMemoryContainerForSpuThread, 0x82275c1c);
EXPORT(spursAttributeSetSpuThreadGroupType, 0xa839a4d9);
EXPORT(spursAttributeEnableSpuPrintfIfAvailable, 0x1051d134);
EXPORT(spursWakeUp, 0x7e4ea023);
EXPORT(spursGetNumSpuThread, 0xc56defb5);
EXPORT(spursSetMaxContention, 0x84d2f6d5);
EXPORT(spursSetPriorities, 0x80a29e27);
EXPORT(spursGetSpuThreadId, 0x6c960f6d);
EXPORT(spursGetSpuThreadGroupId, 0x39c173fb);
EXPORT(spursGetInfo, 0x1f402f8f);
EXPORT(spursGetSpuGuid, 0x6fcdf6e3);

//TODO add all function definitions and data types


EXPORT(spursJobGuardReset, 0xaf2519);
EXPORT(spursLFQueueInitialize, 0x11ee38b);
EXPORT(spursQueueDetachLv2EventQueue, 0x39d70b7);
EXPORT(spursQueueInitialize, 0x082bfb09);
EXPORT(spursWorkloadAttributeSetShutdownCompletionEventHook, 0x0eb4bc38 );
EXPORT(spursTaskExitCodeGet, 0x13ae18f3);
EXPORT(spursJobChainGetError, 0x161da6a7);
EXPORT(spursTasksetAttributeInitialize, 0x16394a4e);
EXPORT(spursLFQueueAttachLv2EventQueue, 0x1656d49f);
EXPORT(spursAddUrgentCommand, 0x17001000);
EXPORT(spursRequestIdleSpu, 0x182d9890);
EXPORT(spursSendWorkloadSignal, 0x1d2bca4b);
EXPORT(spursTaskGetLoadableSegmentPattern, 0x1d344406);
EXPORT(spursCreateTaskWithAttribute, 0x1d46fedf);
EXPORT(spursDestroyTaskset2, 0x1ebcf459 );
EXPORT(spursQueueGetTasksetAddress, 0x2093252b);
EXPORT(spursEventFlagDetachLv2EventQueue, 0x22aab31d);
EXPORT(spursQueueClear, 0x247414d0);
EXPORT(spursJobChainAttributeSetJobTypeMemoryCheck, 0x2cfccb99);
EXPORT(spursWorkloadFlagReceiver2, 0x2ddbcc0a);
EXPORT(spursTasksetSetExceptionEventHandler, 0x2edcff92);
EXPORT(spursCreateJobChainWithAttribute, 0x303c19cd);
EXPORT(spursEnableExceptionEventHandler, 0x32b94add);
EXPORT(spursTaskExitCodeInitialize, 0x34552fa6);
EXPORT(spursJobChainAttributeInitialize, 0x3548f483);
EXPORT(spursLFQueuePopBody, 0x35dae22b);
EXPORT(spursQueueDepth, 0x35f02287);
EXPORT(spursQueueGetEntrySize, 0x369fe03d);
EXPORT(spursEventFlagWait, 0x373523d4);
EXPORT(spursJobChainGetSpursAddress, 0x494613c7);
EXPORT(spursReadyCountSwap, 0x49a3426d);
EXPORT(spursWorkloadAttributeSetName, 0x4a5eab63);
EXPORT(spursCreateTaskset2, 0x4a6465e3);
EXPORT(spursEventFlagClear, 0x4ac7bae4);
EXPORT(spursUnsetExceptionEventHandler, 0x4c75deb8);
EXPORT(spursLookUpTasksetAddress, 0x4cce88a9);
EXPORT(spursGetJobChainInfo, 0x4ceb9694);
EXPORT(spursEventFlagGetClearMode, 0x4d1e9373);
EXPORT(spursSetPreemptionVictimHints, 0x4de203e2);
EXPORT(spursGetWorkloadInfo, 0x4e153e3e);
EXPORT(spursDetachLv2EventQueue, 0x4e66d483);
EXPORT(spursJobChainSetExceptionEventHandler, 0x5202e53b);
EXPORT(spursCreateTaskset, 0x52cc6c82);
EXPORT(spursQueueSize, 0x54876603);
EXPORT(spursSemaphoreGetTasksetAddress, 0x568b2352);
EXPORT(spursTraceInitialize, 0x569674e3);
EXPORT(spursRemoveWorkload, 0x57e4dec3);
EXPORT(spursTasksetGetSpursAddress, 0x58d58fcf);
EXPORT(spursEventFlagInitialize, 0x5ef96465);
EXPORT(spursWaitForWorkloadShutdown, 0x5fd43fe4);
EXPORT(spursTasksetAttributeSetName, 0x652b70e2);
EXPORT(spursJobGuardInitialize, 0x68aaeba9);
EXPORT(spursAddWorkload, 0x69726aa2);
EXPORT(spursJobChainUnsetExceptionEventHandler, 0x6aa76999);
EXPORT(spursEventFlagTryWait, 0x6d2d9339);
EXPORT(spursShutdownJobChain, 0x738e40e6);
EXPORT(spursLFQueueDetachLv2EventQueue, 0x73e06f91);
EXPORT(spursSetGlobalExceptionEventHandler, 0x7517724a);
EXPORT(spursReadyCountAdd, 0x75211196);
EXPORT(spursSemaphoreInitialize, 0x77cdac0c);
EXPORT(spursTraceFinalize, 0x7b9cbb74);
EXPORT(spursTaskGetReadOnlyAreaPattern, 0x7cb33c2e);
EXPORT(spursBarrierInitialize, 0x7fdf4fef);
EXPORT(spursTryJoinTask2, 0x838fa4f0);
EXPORT(spursUnsetGlobalExceptionEventHandler, 0x861237f8);
EXPORT(spursGetJobChainId, 0x86c864a2);
EXPORT(spursEventFlagAttachLv2EventQueue, 0x87630976);
EXPORT(spursEventFlagGetDirection, 0x890f9e5a);
EXPORT(spursLFQueuePushBody, 0x8a85674d);
EXPORT(spursTaskAttribute2Initialize, 0x8adadf65);
EXPORT(spursTasksetAttributeSetTasksetSize, 0x8f122ef8);
EXPORT(spursAddUrgentCall, 0x8fdf50b2);
EXPORT(spursTaskGetContextSaveAreaSize, 0x9034e538);
EXPORT(spursQueuePopBody, 0x91066667);
EXPORT(spursTaskGenerateLsPattern, 0x9197915f);
EXPORT(spursQueuePushBody, 0x92cff6ed);
EXPORT(spursTasksetUnsetExceptionEventHandler, 0x94034c95);
EXPORT(spursEventFlagGetTasksetAddress, 0x947efb0b);
EXPORT(spursJobHeaderSetJobbin2Param, 0x97a2f6c8);
EXPORT(spursShutdownWorkload, 0x98d5b343);
EXPORT(spursBarrierGetTasksetAddress, 0x9aeb5432);
EXPORT(spursAttributeEnableSystemWorkload, 0x9dcbcb5d);
EXPORT(spursJoinTaskset, 0x9f72add3);
EXPORT(spursGetTasksetInfo, 0x9fcb567b);
EXPORT(spursJobChainAttributeSetName, 0x9fef70c2 );
EXPORT(spursTaskAttributeSetExitCodeContainer, 0xa121a224);
EXPORT(spursWorkloadFlagReceiver, 0xa73bf47e);
EXPORT(spursShutdownTaskset, 0xa789e631);
EXPORT(spursJoinTask2, 0xa7a94892);
EXPORT(spursJoinJobChain, 0xa7c066de);
EXPORT(spursGetWorkloadData, 0xa7f9e716);
EXPORT(spursLFQueueGetTasksetAddress, 0xb792ca1a);
EXPORT(spursTaskAttributeInitialize, 0xb8474eff);
EXPORT(spursAttachLv2EventQueue, 0xb9bc6207);
EXPORT(spursJobChainAttributeSetHaltOnError, 0xbb68d76e);
EXPORT(spursCreateTask, 0xbeb600ac);
EXPORT(spursAddWorkloadWithAttribute, 0xc0158d8b);
EXPORT(spursCreateTasksetWithAttribute, 0xc10931cb);
EXPORT(spursTasksetAttribute2Initialize, 0xc2acdf43);
EXPORT(spursGetWorkloadFlag, 0xc765b995);
EXPORT(spursTraceStart, 0xce853fbf);
EXPORT(spursSetExceptionEventHandler, 0xd2e23fa9);
EXPORT(spursJobGuardNotify, 0xd5d0b256);
EXPORT(spursGetJobPipelineInfo, 0xd86380d8);
EXPORT(spursTasksetAttributeEnableClearLS, 0xdca13593);
EXPORT(spursTraceStop, 0xddc81b5a);
EXPORT(spursSendSignal, 0xe0a6dbe4);
EXPORT(spursCreateTask2, 0xe14ca62d);
EXPORT(spursCreateTask2WithBinInfo, 0xe4944a1c);
EXPORT(spursQueueAttachLv2EventQueue, 0xe5443be7);
EXPORT(spursTaskExitCodeTryGet, 0xe717ac73);
EXPORT(spursJobSetMaxGrab, 0xe7b0e69a);
EXPORT(spursGetTasksetId, 0xe7dd87e1);
EXPORT(spursQueueGetDirection, 0xec68442c);
EXPORT(spursWorkloadAttributeInitialize, 0xefeb2679);
EXPORT(spursReadyCountCompareAndSwap, 0xf1d3552d);
EXPORT(spursRunJobChain, 0xf31731bb);
EXPORT(spursEventFlagSet, 0xf5507729);
EXPORT(spursReadyCountStore, 0xf843818d);


#endif