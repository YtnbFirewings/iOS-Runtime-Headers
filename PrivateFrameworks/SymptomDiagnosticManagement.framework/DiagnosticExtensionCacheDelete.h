/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SymptomDiagnosticManagement.framework/SymptomDiagnosticManagement
 */

@interface DiagnosticExtensionCacheDelete : NSObject

+ (void)purgePayloadsForAllCases;
+ (void)registerCallbacks:(const char *)arg1;
+ (id)sharedInstance;

- (id)_purgeable:(id)arg1 payloadRecords:(id)arg2 urgency:(int)arg3 amount:(unsigned int*)arg4 justLRU:(BOOL)arg5;
- (id)cacheDeletePeriodicWithInfo:(struct __CFDictionary { }*)arg1;
- (id)cacheDeletePurgeWithUrgency:(int)arg1 info:(struct __CFDictionary { }*)arg2;
- (id)cacheDeletePurgeableWithUrgency:(int)arg1 info:(struct __CFDictionary { }*)arg2;
- (unsigned int)purgeOrphanedPayloadsCalculateOnly:(BOOL)arg1;
- (void)purgePayloadsForAllCases;
- (void)purgePayloadsForCases:(id)arg1 payloadRecords:(id)arg2;
- (void)registerCallbacks:(const char *)arg1;
- (id)replyCacheDeleteDictionaryWithVolume:(id)arg1 amount:(unsigned int)arg2;

@end